/*
 * 利用按鈕來控制流水燈的方向
 */

int i = 0, 
    j = 0, 
    buttonState = 0, 
    LED[] = {8, 9, 10, 11, 12, 13}, 
    direct = 0,
    delayTime = 200;


void setup() {
  pinMode(7, INPUT_PULLUP); // 上拉電阻
  Serial.begin(9600);
  for (i = 0; i < 6; i++){
    pinMode(LED[i], OUTPUT);
    digitalWrite(LED[i], LOW);
  }
}

void loop() {
  buttonState = digitalRead(7);
  
  if (buttonState == LOW){
    delay(delayTime);
    direct = !(direct); // 更改方向
  }
  
  if (direct == 0){ // 由右至左
    digitalWrite(LED[j], HIGH);
    delay(delayTime);
    j += 1;
    if (j == 6) j = 0;
  } else{ // 由左至右
    digitalWrite(LED[j], HIGH);
    delay(delayTime);
    j -= 1;
    if (j == -1) j = 5;
  }
  
  for (i = 0; i < 6; i++){ // 關閉全部的LED
    digitalWrite(LED[i], LOW);
  }
}
