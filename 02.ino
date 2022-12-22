/*
此專題為顯示陣列裡元素與for迴圈遞增與遞減相互變化，可搭配硬體和序列埠監控視窗觀察
*/
int LED[] = {3, 5, 6, 9, 10, 11}; //宣告腳位的變數
int i, j; // 宣告迴圈的變數

void setup() {
  Serial.begin(9600);
  // 遞增
  Serial.println("increase");
  for (i = 0; i < 6; i++)
  {
    j = i + 1; //j為迴圈的執行次數
    pinMode(LED[i], OUTPUT);
    digitalWrite(LED[i], true); // HIGH為1，又稱true
    Serial.println(String() + "第" + j + "次迴圈" + " " + "Arduino上的腳位:" + LED[i]);
    delay(1000);
  }
  // 遞減
  Serial.println("decrease");
  j = 0;
  for(i = 5; i > -1; i--) //上一個for迴圈已經到 i = 5 所以此迴圈的初值與中止值要小心設定。
  {
    j = j + 1;  //j為迴圈的執行次數
    pinMode(LED[i], OUTPUT);
    digitalWrite(LED[i], false); // LOW為0，又稱false
    Serial.println(String() + "第" + j + "次迴圈" + " " + "Arduino上的腳位:" + LED[i]);
    delay(1000);
  }
}

void loop() {

}
