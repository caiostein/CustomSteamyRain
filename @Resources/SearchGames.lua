-- Define global tables to store game information
local gamesInfo = {}
local gameIDs = {}
local nonSteamGames = {}

function Initialize()
    scriptPath = SKIN:GetVariable("@")
    gamesInfoPath = scriptPath .. "GamesInfo.inc"
    nonSteamGamesPath = scriptPath .. "NonSteamGames.inc"

    gameIDs, _, _ = ReadGameInfo(gamesInfoPath)
    _, gamesInfo, _ = ReadGameInfo(gamesInfoPath)
    _, _, nonSteamGames = ReadGameInfo(nonSteamGamesPath)
end

function FilterMainList()
    -- Se as tabelas estiverem vazias, recarrega
    if not next(gameIDs) then Initialize() end

    -- Lê a variável salva pelo INI (Evita crash com espaços ou aspas)
    local searchInput = SKIN:GetVariable("SearchInput", "")
    
    -- Verifica se a busca foi apagada
    local isSearchEmpty = (searchInput == nil or searchInput == "" or searchInput == "Search by Name or ID")
    local normalizedInput = NormalizeString(searchInput)

    -- 1. Filtragem dos Jogos da Steam (Meters nativos da lista: Game1, Game2...)
    for id, name in pairs(gamesInfo) do
        if isSearchEmpty then
            SKIN:Bang('!ShowMeter', 'Game' .. id)
            SKIN:Bang('!ShowMeter', 'Vis' .. id)
        else
            local normalizedName = NormalizeString(name)
            
            if (gameIDs[id] == searchInput) or StringContains(normalizedName, normalizedInput) then
                SKIN:Bang('!ShowMeter', 'Game' .. id)
                SKIN:Bang('!ShowMeter', 'Vis' .. id)
            else
                SKIN:Bang('!HideMeter', 'Game' .. id)
                SKIN:Bang('!HideMeter', 'Vis' .. id)
            end
        end
    end

    -- 2. Filtragem dos Jogos Non-Steam (Meters nativos da lista: Egame1, Egame2...)
    for egame, gameValue in pairs(nonSteamGames) do
        if isSearchEmpty then
            SKIN:Bang('!ShowMeter', 'Egame' .. egame)
            SKIN:Bang('!ShowMeter', 'EVis' .. egame)
        else
            local normalizedName = NormalizeString(gameValue)
            
            if StringContains(normalizedName, normalizedInput) then
                SKIN:Bang('!ShowMeter', 'Egame' .. egame)
                SKIN:Bang('!ShowMeter', 'EVis' .. egame)
            else
                SKIN:Bang('!HideMeter', 'Egame' .. egame)
                SKIN:Bang('!HideMeter', 'EVis' .. egame)
            end
        end
    end

    -- Atualiza toda a área da lista e as medidas de scroll
    SKIN:Bang('!UpdateMeterGroup', 'Games')
    SKIN:Bang('!UpdateMeasure', 'Lenght')
    SKIN:Bang('!UpdateMeasure', 'ContainerSize')
    SKIN:Bang('!ReDraw')
end

-- Função original para ler os arquivos .inc
function ReadGameInfo(filePath)
    local gamesInfoTable = {}
    local gameIDsTable = {}
    local nonSteamGamesTable = {}

    local file, err = io.open(filePath, "r")
    if not file then
        return gameIDsTable, gamesInfoTable, nonSteamGamesTable
    end

    for line in file:lines() do
        local i, ID = line:match('ID(%d+)=([^"]+)')
        local id, name = line:match('ID(%d+)name="([^"]+)"')
        local egame, gameValue = line:match('Egame(%d+)="([^"]+)"')

        if i and ID then
            gameIDsTable[i] = ID
        elseif id and name then
            gamesInfoTable[id] = name
        elseif egame and gameValue then
            nonSteamGamesTable[egame] = gameValue
        end
    end
    file:close()
    return gameIDsTable, gamesInfoTable, nonSteamGamesTable
end

-- Funcões de verificação originais
function StringContains(str, substr)
    return string.find(str, substr, 1, true) ~= nil
end

function NormalizeString(inputString)
    if type(inputString) == "number" then
        inputString = tostring(inputString)
    end
    return inputString:gsub("[%s%p]", ""):lower()
end