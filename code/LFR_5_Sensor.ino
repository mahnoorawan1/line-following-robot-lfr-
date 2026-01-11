#define RF 5
#define RB 6
#define LF 9
#define LB 10

// ---------------- SENSOR PINS ----------------
#define R_S  A1   // Right
#define M_S  A2   // Middle
#define L_S  A3   // Left
#define FR_S A4   // Far Right
#define FL_S A5   // Far Left

int L, M, R, FL, FR;

// ---------------- SETUP ----------------
void setup() {

  // Sensor pins
  pinMode(R_S, INPUT);
  pinMode(M_S, INPUT);
  pinMode(L_S, INPUT);
  pinMode(FR_S, INPUT);
  pinMode(FL_S, INPUT);

  // Motor pins
  pinMode(RF, OUTPUT);
  pinMode(RB, OUTPUT);
  pinMode(LF, OUTPUT);
  pinMode(LB, OUTPUT);

  Serial.begin(9600);
}

// ---------------- MOTOR FUNCTION ----------------
void mov(int rf, int rb, int lf, int lb) {
  analogWrite(RF, rf);
  analogWrite(RB, rb);
  analogWrite(LF, lf);
  analogWrite(LB, lb);
}

// ---------------- MAIN LOOP ----------------
void loop() {

  // Read sensors
  FL = digitalRead(FL_S);
  L  = digitalRead(L_S);
  M  = digitalRead(M_S);
  R  = digitalRead(R_S);
  FR = digitalRead(FR_S);

  // Debug output
  Serial.print(FL); Serial.print(" ");
  Serial.print(L);  Serial.print(" ");
  Serial.print(M);  Serial.print(" ");
  Serial.print(R);  Serial.print(" ");
  Serial.println(FR);

// Sharp Left (Far Left)
if (FL == 1) {
  mov(120, 0, 0, 50);
}

// Slight Left
else if (L == 1) {
  mov(110, 0, 0, 0);
}

// Go straight
else if (M == 1) {
  mov(90, 0, 90, 0);
}

// Slight Right
else if (R == 1) {
  mov(0, 0, 110, 0);
}

// Sharp Right (Far Right)
else if (FR == 1) {
  mov(0, 50, 120, 0);
}
