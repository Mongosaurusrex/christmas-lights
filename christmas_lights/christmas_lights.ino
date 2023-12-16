void setup()
{
    // initialize digital pin LED_BUILTIN as an output.
    pinMode(13, OUTPUT);
    pinMode(12, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(10, OUTPUT);
}

void slow_cycle()
{
    digitalWrite(13, HIGH);
    delay(500);                  
    digitalWrite(13, LOW); 
    delay(500);         
    digitalWrite(12, HIGH); // turn the LED on (HIGH is the voltage level)
    delay(500);                     // wait for a second
    digitalWrite(12, LOW);  // turn the LED off by making the voltage LOW
    delay(500);                     // wait for a second
    digitalWrite(11, HIGH); // turn the LED on (HIGH is the voltage level)
    delay(500);                     // wait for a second
    digitalWrite(11, LOW);  // turn the LED off by making the voltage LOW
    delay(500);                     // wait for a second
    digitalWrite(10, HIGH); // turn the LED on (HIGH is the voltage level)
    delay(500);                     // wait for a second
    digitalWrite(10, LOW);  // turn the LED off by making the voltage LOW
    delay(500);     
}

void fast_cycle()
{
    digitalWrite(13, HIGH);
    delay(100);                  
    digitalWrite(13, LOW); 
    delay(100);         
    digitalWrite(12, HIGH); // turn the LED on (HIGH is the voltage level)
    delay(100);                     // wait for a second
    digitalWrite(12, LOW);  // turn the LED off by making the voltage LOW
    delay(100);                     // wait for a second
    digitalWrite(11, HIGH); // turn the LED on (HIGH is the voltage level)
    delay(100);                     // wait for a second
    digitalWrite(11, LOW);  // turn the LED off by making the voltage LOW
    delay(100);                     // wait for a second
    digitalWrite(10, HIGH); // turn the LED on (HIGH is the voltage level)
    delay(100);                     // wait for a second
    digitalWrite(10, LOW);  // turn the LED off by making the voltage LOW
    delay(100);     
}

void loop()
{
  slow_cycle();
  fast_cycle();
  fast_cycle();
  fast_cycle();
  slow_cycle();
  fast_cycle();
  fast_cycle();
}
