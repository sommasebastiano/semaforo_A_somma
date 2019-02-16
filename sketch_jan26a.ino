int rosso1 = 13;
int giallo1 = 12;
int verde1 = 11;

int rosso2 = 10;
int giallo2 = 9;
int verde2 = 8;
int tempogiallo;
int lampeggi;
int tempolampeggi;
int semaforo;
void setup() {
  // put your setup code here, to run once:
pinMode(rosso1, OUTPUT);
pinMode(giallo1, OUTPUT);
pinMode(verde1, OUTPUT);
pinMode(rosso2, OUTPUT);
pinMode(giallo2, OUTPUT);
pinMode(verde2, OUTPUT);
Serial.begin(9600);
Serial.println("Il giallo deve durare:");
while(Serial.available()==0){}
tempogiallo = Serial.readString().toInt();
Serial.println(tempogiallo);
Serial.println("Quanti lampeggi verdi devono esserci?");
while(Serial.available()==0){}
lampeggi = Serial.readString().toInt();
Serial.println(lampeggi);
Serial.println("Quanto devono durare i lampeggi?");
while(Serial.available()==0){}
tempolampeggi = Serial.readString().toInt();
Serial.println(tempolampeggi);
Serial.println("Quanto devono durare il rosso e il verde?");
while(Serial.available()==0){}
semaforo = Serial.readString().toInt();
Serial.println(semaforo);

}

void prima()
{
digitalWrite(rosso1, HIGH);
digitalWrite(verde2, HIGH);
delay(semaforo);
}
void seconda()
{
  for(int i = 0; i < lampeggi; i++){
    digitalWrite(verde2, LOW);
    delay(tempolampeggi);
    digitalWrite(verde2, HIGH);
    delay(tempolampeggi);
    }
    digitalWrite(verde2, LOW);
}

void terza()
{
  digitalWrite(giallo1, HIGH);
   digitalWrite(giallo2, HIGH);
   delay(tempogiallo);
}

void quarta(){
digitalWrite(rosso1, LOW);
digitalWrite(giallo1, LOW);
digitalWrite(giallo2, LOW);
}
void quinta()
{
digitalWrite(rosso2, HIGH);
digitalWrite(verde1, HIGH);
delay(semaforo);
}
void sesta()
{
  for(int i = 0; i < lampeggi; i++){
    digitalWrite(verde1, LOW);
    delay(tempolampeggi);
    digitalWrite(verde1, HIGH);
    delay(tempolampeggi);
    }
    digitalWrite(verde1, LOW);
}

void settima()
{
  digitalWrite(giallo2, HIGH);
   digitalWrite(giallo1, HIGH);
   delay(tempogiallo);
}

void ottava(){
digitalWrite(rosso2, LOW);
digitalWrite(giallo2, LOW);
digitalWrite(giallo1, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
prima();
seconda();
terza();
quarta();
quinta();
sesta();
settima();
ottava();





}
