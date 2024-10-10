
//Function that returns x^2
int pow2(int x) {
  //Your code here
}

//Function that gives back the average of an array
float avg(float *a, int a_size) {
  //Your code here
}

//Given a pointer, change the value that the pointer references to 42069
void changeX(int *x_p) {
  //Your code here
}

float getSlope(float x1, float y1, float x2, float y2) {
  //Your code here
}

//CHALLENGE:
//Approximation of sqrt(x). Look up linear approximation or Newton's Method.
float squareRoot(float x) {
  //Your code here
}

//CHALLENGE #2: look up bubble sort
void bubbleSort(int *a, int a_size) {
  //Your code here
}

void setup() {
  Serial.begin(9600);
  float testArray[9] = {1.2, 3.4, 5.4, 2.3, 2, 5, 7, 2, 69};
  int x = 0;
  int *x_p = &x;
  Serial.print("pow2(16): OUT: "); Serial.print(pow2(16)); Serial.println("ACTUAL: 256");
  Serial.print("avg(testArray, 9): OUT: "); Serial.print(avg(testArray, 9)); Serial.println("ACTUAL: 10.811111 (approx)");
  Serial.print("changeX(x_p): OUT: "); Serial.print(x); Serial.println("ACTUAL: 42069");
  //Make test cases for the rest of the functions

}

void loop() {
  //ugnore

}
