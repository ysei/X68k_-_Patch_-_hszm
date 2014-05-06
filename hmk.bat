
	has -u -i%include% hisio		|| if errorlevel 1 goto ERR_MES
	hlk hisio main_init scroll naw_file	|| if errorlevel 1 goto ERR_MES
goto GOOD
rem ==============
:ERR_MES
	echo off
	echo	
	echo 					ÉGÉâÅ[Ç∂Ç·

rem ==============
:GOOD
	pause
	hisio.x
	screen
	tcolor ,#24,,#26
	pause

	em hisio.has
