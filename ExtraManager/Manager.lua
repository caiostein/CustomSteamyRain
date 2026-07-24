function Initialize()
    filePath = SKIN:GetVariable('@') .. "NonSteamGames.inc"
end

function LoadGames()
    games = {}
    local f = io.open(filePath, "r")
    if f then
        for line in f:lines() do
            local k, v = line:match("^([%w_]+)%s*=%s*(.*)$")
            if k and v then
                v = v:gsub('^"(.*)"$', '%1') -- Remove aspas
                local idx = tonumber(k:match("%d+"))
                
                if k:match("^Egame%d+$") then
                    if not games[idx] then games[idx] = {} end
                    games[idx].name = v
                elseif k:match("^Egame%d+Path$") then
                    if not games[idx] then games[idx] = {} end
                    games[idx].path = v
                elseif k:match("^Egame%d+Image$") then
                    if not games[idx] then games[idx] = {} end
                    games[idx].image = v
                elseif k:match("^Egame%d+Vis$") then
                    if not games[idx] then games[idx] = {} end
                    games[idx].vis = v
                end
            end
        end
        f:close()
    end

    -- Organiza e remove buracos (ex: se o 2 for deletado, o 3 vira o 2)
    local keys = {}
    for k in pairs(games) do table.insert(keys, k) end
    table.sort(keys)
    
    local packed = {}
    for _, k in ipairs(keys) do
        table.insert(packed, games[k])
    end
    games = packed

    UpdateList()
    PrepareNew()
end

local listOffset = 0
local maxVisible = 8

function UpdateList()
    for i=1, maxVisible do
        local actualIndex = i + listOffset
        if games[actualIndex] then
            -- Atualiza o texto para mostrar o jogo correto
            SKIN:Bang('!SetOption', 'Slot'..i..'Name', 'Text', actualIndex .. '. ' .. games[actualIndex].name)
            -- Atualiza a ação de clique para apontar para o ID real, não apenas o slot visual
            SKIN:Bang('!SetOption', 'Slot'..i..'Name', 'LeftMouseUpAction', '[!CommandMeasure MeasureLua "SelectGame('..actualIndex..')"]')
            SKIN:Bang('!ShowMeter', 'Slot'..i..'Name')
        else
            SKIN:Bang('!HideMeter', 'Slot'..i..'Name')
        end
    end
    SKIN:Bang('!UpdateMeterGroup', 'List')
    SKIN:Bang('!Redraw')
end

function ScrollList(dir)
    if dir == "up" and listOffset > 0 then
        listOffset = listOffset - 1
        UpdateList()
    elseif dir == "down" and listOffset + maxVisible < #games then
        listOffset = listOffset + 1
        UpdateList()
    end
end

function SelectGame(idx)
    idx = tonumber(idx)
    if games[idx] then
        SKIN:Bang('!SetVariable', 'CurrentIndex', idx)
        SKIN:Bang('!SetVariable', 'TempName', games[idx].name)
        SKIN:Bang('!SetVariable', 'TempPath', games[idx].path or "")
        SKIN:Bang('!SetVariable', 'TempImage', games[idx].image or "")
        SKIN:Bang('!SetOption', 'ModeTitle', 'Text', 'Editando: ' .. games[idx].name)
        SKIN:Bang('!ShowMeter', 'DeleteButton')
        SKIN:Bang('!UpdateMeterGroup', 'Editor')
        SKIN:Bang('!Redraw')
    end
end

function PrepareNew()
    SKIN:Bang('!SetVariable', 'CurrentIndex', '0')
    SKIN:Bang('!SetVariable', 'TempName', 'Novo Jogo')
    SKIN:Bang('!SetVariable', 'TempPath', 'C:\\Caminho\\jogo.exe')
    SKIN:Bang('!SetVariable', 'TempImage', 'C:\\Caminho\\capa.jpg')
    SKIN:Bang('!SetOption', 'ModeTitle', 'Text', 'Adicionar Novo Jogo')
    SKIN:Bang('!HideMeter', 'DeleteButton')
    SKIN:Bang('!UpdateMeterGroup', 'Editor')
    SKIN:Bang('!Redraw')
end

function SaveGame()
    local idx = tonumber(SKIN:GetVariable('CurrentIndex'))
    local name = SKIN:GetVariable('TempName')
    local path = SKIN:GetVariable('TempPath')
    local image = SKIN:GetVariable('TempImage')

    if idx == 0 then
        table.insert(games, {name=name, path=path, image=image, vis="0"})
    else
        if games[idx] then
            games[idx].name = name
            games[idx].path = path
            games[idx].image = image
        end
    end
    WriteFile()
end

function DeleteSelected()
    local idx = tonumber(SKIN:GetVariable('CurrentIndex'))
    if idx > 0 and games[idx] then
        table.remove(games, idx)
        WriteFile()
    end
end

function WriteFile()
    local f = io.open(filePath, "w")
    if not f then return end
    
    local count = #games
    f:write("[Variables]\n")
    f:write("ExtraGamesCount=" .. count .. "\n")
    f:write("ExtraGameCountPLUS=" .. count .. "\n\n")

    for i, g in ipairs(games) do
        f:write("Egame" .. i .. "=\"" .. (g.name or "") .. "\"\n")
        f:write("Egame" .. i .. "Path=\"" .. (g.path or "") .. "\"\n")
        f:write("Egame" .. i .. "Image=\"" .. (g.image or "") .. "\"\n")
        f:write("Egame" .. i .. "Vis=" .. (g.vis or "0") .. "\n\n")
    end
    f:close()

    LoadGames()
end