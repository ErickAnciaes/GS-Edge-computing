#include <LiquidCrystal.h>

// definição das portas do sensor
#define TRIG 9
#define ECHO 8
#define LED 7
#define BUZZER 6

// ativação das portas do LCD
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

//definição dos pinos e lcd em estado inicial
void setup() {
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  pinMode(LED, OUTPUT);
  pinMode(BUZZER, OUTPUT);
  
  lcd.begin(16, 2);
  lcd.print("Monitorando...");
  delay(2000);
  lcd.clear();
  Serial.begin(9600);
}

//declarações de variaveis do sensor
void loop() {
  long duration;
  float distance;

// Envia pulso ultrassônico e calcula a distância até o objeto com base no tempo do eco
  digitalWrite(TRIG, LOW);
  delay(2);
  digitalWrite(TRIG, HIGH);
  delay(10);
  digitalWrite(TRIG, LOW);

  duration = pulseIn(ECHO, HIGH);
  distance = duration * 0.034 / 2; 
  
// Mostra no LCD a distância do nivel do rio ao sensor
  Serial.print("Distancia: ");
  Serial.print(distance);
  Serial.println(" cm");

  lcd.setCursor(0, 0);
  lcd.print("Dist: ");
  lcd.print(distance);
  lcd.print(" cm   ");

// Mostra o status do nível no LCD e controla LED e buzzer conforme a distância medida
  lcd.setCursor(0, 1);
  if (distance < 20) {
    lcd.print("RISCO ENCHENTE");
    digitalWrite(LED, HIGH);
    digitalWrite(BUZZER, HIGH);
  } else if (distance < 40) {
    lcd.print("Nivel ALTO       ");
    digitalWrite(LED, HIGH);
    digitalWrite(BUZZER, LOW);
  } else {
    lcd.print("Nivel OK         ");
    digitalWrite(LED, LOW);
    digitalWrite(BUZZER, LOW);
  }

  delay(1000);
}
