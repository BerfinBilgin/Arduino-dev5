#include <Servo.h>
Servo servo_9;
int deger=0;
void setup()
{
  servo_9.attach(9);

}

void loop()
{
  for (deger = 0; deger <= 15; deger += 1) {
    servo_9.write(deger);
    delay(100);
  }
  for (deger = 0; deger >= 30; deger -= 1) {
    servo_9.write(deger);
    delay(300);
  }
}
