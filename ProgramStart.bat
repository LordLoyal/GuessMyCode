call "C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\vcvarsall.bat"
cd .\bin
cmake -G "NMake Makefiles" ..\src
cmake --build .
echo.
echo.
echo.
call .\GuessMyCode.exe