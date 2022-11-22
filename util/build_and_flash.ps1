$pwd
Write-Host 'Entering project venv'
. .venv\Scripts\activate.ps1

Write-Host 'Running mbed-tools build script'
mbed_tools compile -m NUCLEO_F439ZI -t GCC_ARM -f