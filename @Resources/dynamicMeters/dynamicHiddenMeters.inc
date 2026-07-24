[Name1]
Meter=String
Text=#ID1name#
LeftMouseUpAction=[steam://rungameid/#ID1#]
RightMouseUpAction=[steam://store/#ID1#]
MeterStyle=NameStyle
Hidden=(1-#Vis1#)
Group=Games | G1

[Game1]
Meter=Image
MeterStyle=GameStyle
ImageName=C:\Program Files (x86)\Steam/appcache/librarycache\#ID1#\icon.jpg
LeftMouseUpAction=[steam://rungameid/#ID1#]
RightMouseUpAction=[steam://store/#ID1#]
Hidden=(1-#Vis1#)
Group=Games | G1

[Vis1]
Meter=String
MeterStyle=VisStyle
LeftMouseUpAction=[!WriteKeyValue Variables "Vis1" 0 "#@#GamesInfo.inc"][!WriteKeyValue Variables GameCountPLUS "(Clamp((#GameCountPLUS#+1),0,#GameCount#))" "#@#GamesInfo.inc"][!SetVariable GameCountPLUS "(Clamp((#GameCountPLUS#+1),0,#GameCount#))"][!SetVariable Vis1 0][!UpdateMeasure HideGame][!Updatemeasure Lenght][!HideMeterGroup G1][!UpdateMeterGroup Games][!ReDraw][!SetVariable UpdateVar "Vis1"][!SetVariable UpdateVar2 "GameCountPLUS"][!SetVariable UpdateVar3 "G1"][!Updatemeasure HiddenWindow]
Hidden=(1-#Vis1#)
Group=Games | G1

[Gap1]
Meter=Image
MeterStyle=GapStyle

[Name2]
Meter=String
Text=#ID2name#
LeftMouseUpAction=[steam://rungameid/#ID2#]
RightMouseUpAction=[steam://store/#ID2#]
MeterStyle=NameStyle
Hidden=(1-#Vis2#)
Group=Games | G2

[Game2]
Meter=Image
MeterStyle=GameStyle
ImageName=C:\Program Files (x86)\Steam/appcache/librarycache\#ID2#\icon.jpg
LeftMouseUpAction=[steam://rungameid/#ID2#]
RightMouseUpAction=[steam://store/#ID2#]
Hidden=(1-#Vis2#)
Group=Games | G2

[Vis2]
Meter=String
MeterStyle=VisStyle
LeftMouseUpAction=[!WriteKeyValue Variables "Vis2" 0 "#@#GamesInfo.inc"][!WriteKeyValue Variables GameCountPLUS "(Clamp((#GameCountPLUS#+1),0,#GameCount#))" "#@#GamesInfo.inc"][!SetVariable GameCountPLUS "(Clamp((#GameCountPLUS#+1),0,#GameCount#))"][!SetVariable Vis2 0][!UpdateMeasure HideGame][!Updatemeasure Lenght][!HideMeterGroup G2][!UpdateMeterGroup Games][!ReDraw][!SetVariable UpdateVar "Vis2"][!SetVariable UpdateVar2 "GameCountPLUS"][!SetVariable UpdateVar3 "G2"][!Updatemeasure HiddenWindow]
Hidden=(1-#Vis2#)
Group=Games | G2

[Gap2]
Meter=Image
MeterStyle=GapStyle

[Name3]
Meter=String
Text=#ID3name#
LeftMouseUpAction=[steam://rungameid/#ID3#]
RightMouseUpAction=[steam://store/#ID3#]
MeterStyle=NameStyle
Hidden=(1-#Vis3#)
Group=Games | G3

[Game3]
Meter=Image
MeterStyle=GameStyle
ImageName=C:\Program Files (x86)\Steam/appcache/librarycache\#ID3#\icon.jpg
LeftMouseUpAction=[steam://rungameid/#ID3#]
RightMouseUpAction=[steam://store/#ID3#]
Hidden=(1-#Vis3#)
Group=Games | G3

[Vis3]
Meter=String
MeterStyle=VisStyle
LeftMouseUpAction=[!WriteKeyValue Variables "Vis3" 0 "#@#GamesInfo.inc"][!WriteKeyValue Variables GameCountPLUS "(Clamp((#GameCountPLUS#+1),0,#GameCount#))" "#@#GamesInfo.inc"][!SetVariable GameCountPLUS "(Clamp((#GameCountPLUS#+1),0,#GameCount#))"][!SetVariable Vis3 0][!UpdateMeasure HideGame][!Updatemeasure Lenght][!HideMeterGroup G3][!UpdateMeterGroup Games][!ReDraw][!SetVariable UpdateVar "Vis3"][!SetVariable UpdateVar2 "GameCountPLUS"][!SetVariable UpdateVar3 "G3"][!Updatemeasure HiddenWindow]
Hidden=(1-#Vis3#)
Group=Games | G3

[Gap3]
Meter=Image
MeterStyle=GapStyle

[Name4]
Meter=String
Text=#ID4name#
LeftMouseUpAction=[steam://rungameid/#ID4#]
RightMouseUpAction=[steam://store/#ID4#]
MeterStyle=NameStyle
Hidden=(1-#Vis4#)
Group=Games | G4

[Game4]
Meter=Image
MeterStyle=GameStyle
ImageName=C:\Program Files (x86)\Steam/appcache/librarycache\#ID4#\icon.jpg
LeftMouseUpAction=[steam://rungameid/#ID4#]
RightMouseUpAction=[steam://store/#ID4#]
Hidden=(1-#Vis4#)
Group=Games | G4

[Vis4]
Meter=String
MeterStyle=VisStyle
LeftMouseUpAction=[!WriteKeyValue Variables "Vis4" 0 "#@#GamesInfo.inc"][!WriteKeyValue Variables GameCountPLUS "(Clamp((#GameCountPLUS#+1),0,#GameCount#))" "#@#GamesInfo.inc"][!SetVariable GameCountPLUS "(Clamp((#GameCountPLUS#+1),0,#GameCount#))"][!SetVariable Vis4 0][!UpdateMeasure HideGame][!Updatemeasure Lenght][!HideMeterGroup G4][!UpdateMeterGroup Games][!ReDraw][!SetVariable UpdateVar "Vis4"][!SetVariable UpdateVar2 "GameCountPLUS"][!SetVariable UpdateVar3 "G4"][!Updatemeasure HiddenWindow]
Hidden=(1-#Vis4#)
Group=Games | G4

[Gap4]
Meter=Image
MeterStyle=GapStyle

[Name5]
Meter=String
Text=#ID5name#
LeftMouseUpAction=[steam://rungameid/#ID5#]
RightMouseUpAction=[steam://store/#ID5#]
MeterStyle=NameStyle
Hidden=(1-#Vis5#)
Group=Games | G5

[Game5]
Meter=Image
MeterStyle=GameStyle
ImageName=C:\Program Files (x86)\Steam/appcache/librarycache\#ID5#\icon.jpg
LeftMouseUpAction=[steam://rungameid/#ID5#]
RightMouseUpAction=[steam://store/#ID5#]
Hidden=(1-#Vis5#)
Group=Games | G5

[Vis5]
Meter=String
MeterStyle=VisStyle
LeftMouseUpAction=[!WriteKeyValue Variables "Vis5" 0 "#@#GamesInfo.inc"][!WriteKeyValue Variables GameCountPLUS "(Clamp((#GameCountPLUS#+1),0,#GameCount#))" "#@#GamesInfo.inc"][!SetVariable GameCountPLUS "(Clamp((#GameCountPLUS#+1),0,#GameCount#))"][!SetVariable Vis5 0][!UpdateMeasure HideGame][!Updatemeasure Lenght][!HideMeterGroup G5][!UpdateMeterGroup Games][!ReDraw][!SetVariable UpdateVar "Vis5"][!SetVariable UpdateVar2 "GameCountPLUS"][!SetVariable UpdateVar3 "G5"][!Updatemeasure HiddenWindow]
Hidden=(1-#Vis5#)
Group=Games | G5

[Gap5]
Meter=Image
MeterStyle=GapStyle

[Name6]
Meter=String
Text=#ID6name#
LeftMouseUpAction=[steam://rungameid/#ID6#]
RightMouseUpAction=[steam://store/#ID6#]
MeterStyle=NameStyle
Hidden=(1-#Vis6#)
Group=Games | G6

[Game6]
Meter=Image
MeterStyle=GameStyle
ImageName=C:\Program Files (x86)\Steam/appcache/librarycache\#ID6#\icon.jpg
LeftMouseUpAction=[steam://rungameid/#ID6#]
RightMouseUpAction=[steam://store/#ID6#]
Hidden=(1-#Vis6#)
Group=Games | G6

[Vis6]
Meter=String
MeterStyle=VisStyle
LeftMouseUpAction=[!WriteKeyValue Variables "Vis6" 0 "#@#GamesInfo.inc"][!WriteKeyValue Variables GameCountPLUS "(Clamp((#GameCountPLUS#+1),0,#GameCount#))" "#@#GamesInfo.inc"][!SetVariable GameCountPLUS "(Clamp((#GameCountPLUS#+1),0,#GameCount#))"][!SetVariable Vis6 0][!UpdateMeasure HideGame][!Updatemeasure Lenght][!HideMeterGroup G6][!UpdateMeterGroup Games][!ReDraw][!SetVariable UpdateVar "Vis6"][!SetVariable UpdateVar2 "GameCountPLUS"][!SetVariable UpdateVar3 "G6"][!Updatemeasure HiddenWindow]
Hidden=(1-#Vis6#)
Group=Games | G6

[Gap6]
Meter=Image
MeterStyle=GapStyle

[Name7]
Meter=String
Text=#ID7name#
LeftMouseUpAction=[steam://rungameid/#ID7#]
RightMouseUpAction=[steam://store/#ID7#]
MeterStyle=NameStyle
Hidden=(1-#Vis7#)
Group=Games | G7

[Game7]
Meter=Image
MeterStyle=GameStyle
ImageName=C:\Program Files (x86)\Steam/appcache/librarycache\#ID7#\icon.jpg
LeftMouseUpAction=[steam://rungameid/#ID7#]
RightMouseUpAction=[steam://store/#ID7#]
Hidden=(1-#Vis7#)
Group=Games | G7

[Vis7]
Meter=String
MeterStyle=VisStyle
LeftMouseUpAction=[!WriteKeyValue Variables "Vis7" 0 "#@#GamesInfo.inc"][!WriteKeyValue Variables GameCountPLUS "(Clamp((#GameCountPLUS#+1),0,#GameCount#))" "#@#GamesInfo.inc"][!SetVariable GameCountPLUS "(Clamp((#GameCountPLUS#+1),0,#GameCount#))"][!SetVariable Vis7 0][!UpdateMeasure HideGame][!Updatemeasure Lenght][!HideMeterGroup G7][!UpdateMeterGroup Games][!ReDraw][!SetVariable UpdateVar "Vis7"][!SetVariable UpdateVar2 "GameCountPLUS"][!SetVariable UpdateVar3 "G7"][!Updatemeasure HiddenWindow]
Hidden=(1-#Vis7#)
Group=Games | G7

[Gap7]
Meter=Image
MeterStyle=GapStyle

[Name8]
Meter=String
Text=#ID8name#
LeftMouseUpAction=[steam://rungameid/#ID8#]
RightMouseUpAction=[steam://store/#ID8#]
MeterStyle=NameStyle
Hidden=(1-#Vis8#)
Group=Games | G8

[Game8]
Meter=Image
MeterStyle=GameStyle
ImageName=C:\Program Files (x86)\Steam/appcache/librarycache\#ID8#\icon.jpg
LeftMouseUpAction=[steam://rungameid/#ID8#]
RightMouseUpAction=[steam://store/#ID8#]
Hidden=(1-#Vis8#)
Group=Games | G8

[Vis8]
Meter=String
MeterStyle=VisStyle
LeftMouseUpAction=[!WriteKeyValue Variables "Vis8" 0 "#@#GamesInfo.inc"][!WriteKeyValue Variables GameCountPLUS "(Clamp((#GameCountPLUS#+1),0,#GameCount#))" "#@#GamesInfo.inc"][!SetVariable GameCountPLUS "(Clamp((#GameCountPLUS#+1),0,#GameCount#))"][!SetVariable Vis8 0][!UpdateMeasure HideGame][!Updatemeasure Lenght][!HideMeterGroup G8][!UpdateMeterGroup Games][!ReDraw][!SetVariable UpdateVar "Vis8"][!SetVariable UpdateVar2 "GameCountPLUS"][!SetVariable UpdateVar3 "G8"][!Updatemeasure HiddenWindow]
Hidden=(1-#Vis8#)
Group=Games | G8

[Gap8]
Meter=Image
MeterStyle=GapStyle

[Name9]
Meter=String
Text=#ID9name#
LeftMouseUpAction=[steam://rungameid/#ID9#]
RightMouseUpAction=[steam://store/#ID9#]
MeterStyle=NameStyle
Hidden=(1-#Vis9#)
Group=Games | G9

[Game9]
Meter=Image
MeterStyle=GameStyle
ImageName=C:\Program Files (x86)\Steam/appcache/librarycache\#ID9#\icon.jpg
LeftMouseUpAction=[steam://rungameid/#ID9#]
RightMouseUpAction=[steam://store/#ID9#]
Hidden=(1-#Vis9#)
Group=Games | G9

[Vis9]
Meter=String
MeterStyle=VisStyle
LeftMouseUpAction=[!WriteKeyValue Variables "Vis9" 0 "#@#GamesInfo.inc"][!WriteKeyValue Variables GameCountPLUS "(Clamp((#GameCountPLUS#+1),0,#GameCount#))" "#@#GamesInfo.inc"][!SetVariable GameCountPLUS "(Clamp((#GameCountPLUS#+1),0,#GameCount#))"][!SetVariable Vis9 0][!UpdateMeasure HideGame][!Updatemeasure Lenght][!HideMeterGroup G9][!UpdateMeterGroup Games][!ReDraw][!SetVariable UpdateVar "Vis9"][!SetVariable UpdateVar2 "GameCountPLUS"][!SetVariable UpdateVar3 "G9"][!Updatemeasure HiddenWindow]
Hidden=(1-#Vis9#)
Group=Games | G9

[Gap9]
Meter=Image
MeterStyle=GapStyle

[Name10]
Meter=String
Text=#ID10name#
LeftMouseUpAction=[steam://rungameid/#ID10#]
RightMouseUpAction=[steam://store/#ID10#]
MeterStyle=NameStyle
Hidden=(1-#Vis10#)
Group=Games | G10

[Game10]
Meter=Image
MeterStyle=GameStyle
ImageName=C:\Program Files (x86)\Steam/appcache/librarycache\#ID10#\icon.jpg
LeftMouseUpAction=[steam://rungameid/#ID10#]
RightMouseUpAction=[steam://store/#ID10#]
Hidden=(1-#Vis10#)
Group=Games | G10

[Vis10]
Meter=String
MeterStyle=VisStyle
LeftMouseUpAction=[!WriteKeyValue Variables "Vis10" 0 "#@#GamesInfo.inc"][!WriteKeyValue Variables GameCountPLUS "(Clamp((#GameCountPLUS#+1),0,#GameCount#))" "#@#GamesInfo.inc"][!SetVariable GameCountPLUS "(Clamp((#GameCountPLUS#+1),0,#GameCount#))"][!SetVariable Vis10 0][!UpdateMeasure HideGame][!Updatemeasure Lenght][!HideMeterGroup G10][!UpdateMeterGroup Games][!ReDraw][!SetVariable UpdateVar "Vis10"][!SetVariable UpdateVar2 "GameCountPLUS"][!SetVariable UpdateVar3 "G10"][!Updatemeasure HiddenWindow]
Hidden=(1-#Vis10#)
Group=Games | G10

[Gap10]
Meter=Image
MeterStyle=GapStyle

[Name11]
Meter=String
Text=#ID11name#
LeftMouseUpAction=[steam://rungameid/#ID11#]
RightMouseUpAction=[steam://store/#ID11#]
MeterStyle=NameStyle
Hidden=(1-#Vis11#)
Group=Games | G11

[Game11]
Meter=Image
MeterStyle=GameStyle
ImageName=C:\Program Files (x86)\Steam/appcache/librarycache\#ID11#\icon.jpg
LeftMouseUpAction=[steam://rungameid/#ID11#]
RightMouseUpAction=[steam://store/#ID11#]
Hidden=(1-#Vis11#)
Group=Games | G11

[Vis11]
Meter=String
MeterStyle=VisStyle
LeftMouseUpAction=[!WriteKeyValue Variables "Vis11" 0 "#@#GamesInfo.inc"][!WriteKeyValue Variables GameCountPLUS "(Clamp((#GameCountPLUS#+1),0,#GameCount#))" "#@#GamesInfo.inc"][!SetVariable GameCountPLUS "(Clamp((#GameCountPLUS#+1),0,#GameCount#))"][!SetVariable Vis11 0][!UpdateMeasure HideGame][!Updatemeasure Lenght][!HideMeterGroup G11][!UpdateMeterGroup Games][!ReDraw][!SetVariable UpdateVar "Vis11"][!SetVariable UpdateVar2 "GameCountPLUS"][!SetVariable UpdateVar3 "G11"][!Updatemeasure HiddenWindow]
Hidden=(1-#Vis11#)
Group=Games | G11

[Gap11]
Meter=Image
MeterStyle=GapStyle

[Name12]
Meter=String
Text=#ID12name#
LeftMouseUpAction=[steam://rungameid/#ID12#]
RightMouseUpAction=[steam://store/#ID12#]
MeterStyle=NameStyle
Hidden=(1-#Vis12#)
Group=Games | G12

[Game12]
Meter=Image
MeterStyle=GameStyle
ImageName=C:\Program Files (x86)\Steam/appcache/librarycache\#ID12#\icon.jpg
LeftMouseUpAction=[steam://rungameid/#ID12#]
RightMouseUpAction=[steam://store/#ID12#]
Hidden=(1-#Vis12#)
Group=Games | G12

[Vis12]
Meter=String
MeterStyle=VisStyle
LeftMouseUpAction=[!WriteKeyValue Variables "Vis12" 0 "#@#GamesInfo.inc"][!WriteKeyValue Variables GameCountPLUS "(Clamp((#GameCountPLUS#+1),0,#GameCount#))" "#@#GamesInfo.inc"][!SetVariable GameCountPLUS "(Clamp((#GameCountPLUS#+1),0,#GameCount#))"][!SetVariable Vis12 0][!UpdateMeasure HideGame][!Updatemeasure Lenght][!HideMeterGroup G12][!UpdateMeterGroup Games][!ReDraw][!SetVariable UpdateVar "Vis12"][!SetVariable UpdateVar2 "GameCountPLUS"][!SetVariable UpdateVar3 "G12"][!Updatemeasure HiddenWindow]
Hidden=(1-#Vis12#)
Group=Games | G12

[Gap12]
Meter=Image
MeterStyle=GapStyle

[EName1]
Meter=String
Text=#Egame1#
LeftMouseUpAction=["#Egame1Path#"]
RightMouseUpAction=[!ActivateConfig "SteamyRain\ExtraManager" "Manager.ini"]
MeterStyle=NameStyle
Hidden=(1-#Egame1Vis#)
Group=Games | EG1

[EGame1]
Meter=Image
MeterStyle=GameStyle
ImageName=C:\Users\Caio Eppenstein\Desktop\peaha.jpg
LeftMouseUpAction=["#Egame1Path#"]
RightMouseUpAction=[!ActivateConfig "SteamyRain\ExtraManager" "Manager.ini"]
Hidden=(1-#Egame1Vis#)
Group=Games | EG1

[EVis1]
Meter=String
MeterStyle=VisStyle
LeftMouseUpAction=[!WriteKeyValue Variables "Egame1Vis" 0 "#@#NonSteamGames.inc"][!WriteKeyValue Variables ExtraGameCountPLUS "(Clamp((#ExtraGameCountPLUS#+1),0,#ExtraGamesCount#))" "#@#NonSteamGames.inc"][!SetVariable ExtraGameCountPLUS "(Clamp((#ExtraGameCountPLUS#+1),0,#ExtraGamesCount#))"][!SetVariable Egame1Vis 0][!UpdateMeasure HideGame][!Updatemeasure Lenght][!HideMeterGroup EG1][!UpdateMeterGroup Games][!ReDraw][!SetVariable UpdateVar "Egame1Vis"][!SetVariable UpdateVar2 "ExtraGameCountPLUS"][!SetVariable UpdateVar3 "EG1"][!Updatemeasure HiddenWindow]
Hidden=(1-#Egame1Vis#)
Group=Games | EG1

[EGap1]
Meter=Image
MeterStyle=GapStyle

[EName2]
Meter=String
Text=#Egame2#
LeftMouseUpAction=["#Egame2Path#"]
RightMouseUpAction=[!ActivateConfig "SteamyRain\ExtraManager" "Manager.ini"]
MeterStyle=NameStyle
Hidden=(1-#Egame2Vis#)
Group=Games | EG2

[EGame2]
Meter=Image
MeterStyle=GameStyle
ImageName=C:\Users\Caio Eppenstein\Desktop\pasta.png
LeftMouseUpAction=["#Egame2Path#"]
RightMouseUpAction=[!ActivateConfig "SteamyRain\ExtraManager" "Manager.ini"]
Hidden=(1-#Egame2Vis#)
Group=Games | EG2

[EVis2]
Meter=String
MeterStyle=VisStyle
LeftMouseUpAction=[!WriteKeyValue Variables "Egame2Vis" 0 "#@#NonSteamGames.inc"][!WriteKeyValue Variables ExtraGameCountPLUS "(Clamp((#ExtraGameCountPLUS#+1),0,#ExtraGamesCount#))" "#@#NonSteamGames.inc"][!SetVariable ExtraGameCountPLUS "(Clamp((#ExtraGameCountPLUS#+1),0,#ExtraGamesCount#))"][!SetVariable Egame2Vis 0][!UpdateMeasure HideGame][!Updatemeasure Lenght][!HideMeterGroup EG2][!UpdateMeterGroup Games][!ReDraw][!SetVariable UpdateVar "Egame2Vis"][!SetVariable UpdateVar2 "ExtraGameCountPLUS"][!SetVariable UpdateVar3 "EG2"][!Updatemeasure HiddenWindow]
Hidden=(1-#Egame2Vis#)
Group=Games | EG2

[EGap2]
Meter=Image
MeterStyle=GapStyle

