// Academic team project, UAEM, 2025. Adapted from the original report.
// Potentiometer simulates moisture. Physical sensor calibration is required.
const int humedadPin = A0;
const int motorPin = 8;
const float HUMEDAD_OPTIMA = 60.0;
const float HUMEDAD_UMBRAL = 30.0;
const unsigned long BASE_RIEGO = 3000;
const float MS_POR_PORCENTAJE = 300.0;
const unsigned long TIEMPO_ESPERA = 30000;
bool regando = false;
unsigned long inicioRiego = 0, ultimoRiego = 0, duracionRiegoActual = 0;
void setup() {
  Serial.begin(9600);
  pinMode(motorPin, OUTPUT);
  digitalWrite(motorPin, LOW);
}
void loop() {
  int valorCrudo = analogRead(humedadPin);
  float humedadPct = map(valorCrudo, 0, 1023, 0, 100);
  Serial.print("Crudo: "); Serial.print(valorCrudo);
  Serial.print(" Humedad (%): "); Serial.println(humedadPct);
  unsigned long ahora = millis();
  if (!regando && humedadPct <= HUMEDAD_UMBRAL && ahora - ultimoRiego >= TIEMPO_ESPERA) {
    float deficit = HUMEDAD_OPTIMA - humedadPct;
    if (deficit < 0) deficit = 0;
    duracionRiegoActual = BASE_RIEGO + (unsigned long)(deficit * MS_POR_PORCENTAJE);
    regando = true;
    inicioRiego = ahora;
    digitalWrite(motorPin, HIGH);
    Serial.print("RIEGO INICIADO. Duracion (ms): ");
    Serial.println(duracionRiegoActual);
  }
  if (regando && ahora - inicioRiego >= duracionRiegoActual) {
    regando = false;
    digitalWrite(motorPin, LOW);
    ultimoRiego = ahora;
    Serial.println("RIEGO TERMINADO. Motor apagado.");
  }
  delay(200);
}
