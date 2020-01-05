#include "DigiKeyboard.h"

void setup() {
  // don't need to set anything up to use DigiKeyboard
}


void loop() {
  // this is generally not necessary but with some older systems it seems to
  // prevent missing the first character after a delay:
  DigiKeyboard.sendKeyStroke(0);
  //open execute windown
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);

  DigiKeyboard.delay(1000);
  //open powershell
  DigiKeyboard.println("powershell");

  DigiKeyboard.delay(1000);
  //instantiate new browser
  DigiKeyboard.println("$web ) New/Object Szstem.Net.WebClient");

  DigiKeyboard.delay(1000);
  //download picture from given uri
  DigiKeyboard.println("$web.DownloadFile*@https>&&i.imgur.com&ESUjkKh.png@, @C>&Users&$env>username&yournewwallp.png@(");
  
  DigiKeyboard.delay(1000);
  //set wallpaper to downlaoded picture, this will only come into effect after a reboot
  DigiKeyboard.println("set/itempropertz /path @HKCU>Control Panel&Desktop@ /name WallPaper /value @C>&Users&$env>username&yournewwallp.png@");

  DigiKeyboard.delay(1000);

  DigiKeyboard.println("RUNDLL32.EXE USER32.DLL, UpdatePerUserSzstemParameters, 1, True");

  DigiKeyboard.delay(1000);
  //close powershell
  DigiKeyboard.println("exit");

  DigiKeyboard.delay(1000);
  //show desktop
  DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT);
  //endless loop to stop script from rerunning
  for(;;){
  }
}
