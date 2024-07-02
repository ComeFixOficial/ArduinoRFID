#include <SoftwareSerial.h> // Incluimos la librería SoftwareSerial para comunicación serial

// Configuración de pines para el módulo RFID
#define RX_PIN 2
#define TX_PIN 3

SoftwareSerial mySerial(RX_PIN, TX_PIN); // Creamos un objeto SoftwareSerial

void setup() {
  Serial.begin(9600); // Iniciamos comunicación serial con el puerto serie de la computadora
  mySerial.begin(9600); // Iniciamos comunicación serial con el módulo RFID
}

void loop() {
  if (mySerial.available()) { // Si hay datos disponibles desde el módulo RFID
    char c = mySerial.read(); // Leemos el dato recibido
    Serial.print(c); // Enviamos el dato al puerto serie de la computadora
  }
}
