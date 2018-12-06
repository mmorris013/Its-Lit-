int speaker = (pin # sound sensor is connected to);
int led = (pin #led is connected to);

void setup() (
 pinMode(speaker, INPUT);
 pinMode(led, OUTPUT);
)

void loop()  (
  int beat = digitalRead(speaker);

  if(beat == 1)  (
    analogWrite(led, 255);
  ) else (
    analogWrite(led, 0);
  )
)
