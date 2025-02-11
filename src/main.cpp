#include <Arduino.h>

//deklarasi pin LED
//mendeklarasikan variabel konstanta integer untuk menyimpan nomor pin LED

const int ledmerah = 8;
const int ledkuning = 9;
const int ledhijau = 10;



void setup() {

//mengatur pin-pin yg dihubungkan ke LED sebagai OUTPUT
//hal ini berarti pin-pin tersebut dapat digunakan untuk mengendalikan LED
pinMode(ledmerah, OUTPUT);
pinMode(ledkuning, OUTPUT);
pinMode(ledhijau, OUTPUT);
}

void loop() {

//LED merah 
//menyalakan LED merah 5 detik, kemudian mematikan nya  
digitalWrite(ledmerah, HIGH);
delay(5000);
digitalWrite(ledmerah, LOW);

//LED kuning
//menyalakan LED kuning 1 detik, kemudian mematikannya
digitalWrite(ledkuning, HIGH);
delay(1000);
digitalWrite(ledkuning, LOW);

//LED hijau
//menyalakan LED hijau 5 detik, kemudian mematikannya
digitalWrite(ledhijau, HIGH);
delay(5000);
digitalWrite(ledhijau, LOW);

//LED kuning
//menyalakan LED kuning 1 detik, kemudian mematikannya
digitalWrite(ledkuning, HIGH);
delay(1000);
digitalWrite(ledkuning, LOW);
}
