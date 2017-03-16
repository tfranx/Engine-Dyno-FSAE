#define pwm1Pin 3
#define pwm2Pin 5
#define pwm3Pin 9
#define pwm4Pin 11

double dutyCycle = (25 * 2.55); //0-255, ( # * 2.55 ) = dutyCycle input
void setup() {
pinMode(pwm1Pin, OUTPUT);
pinMode(pwm2Pin, OUTPUT);
pinMode(pwm3Pin, OUTPUT);
pinMode(pwm4Pin, OUTPUT);
}

void loop() {
analogWrite(pwm1Pin, dutyCycle);
analogWrite(pwm2Pin, dutyCycle);
analogWrite(pwm3Pin, dutyCycle);
analogWrite(pwm4Pin, dutyCycle);
}
