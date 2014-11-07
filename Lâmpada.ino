
void setup ()
{
   pinMode(5, INPUT); // Sensor
   pinMode (6, INPUT); // Botão
   pinMode(10, OUTPUT); //Lâmpada
}

void loop ()
{
int leitura = digitalRead (5); // Sensor

if (leitura == 0)
  {digitalWrite (10, HIGH);
   delay (60000);}
else
   digitalWrite (10, LOW);
    
int leitura2 = digitalRead (6); // Botão

if (leitura2 == 0)
   digitalWrite (10, HIGH);
else
   digitalWrite (10, LOW);

}
