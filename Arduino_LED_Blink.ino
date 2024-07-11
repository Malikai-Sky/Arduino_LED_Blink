void setup() {
    pinMode(13, OUTPUT);  // 将13号引脚设置为输出模式
}

void loop() {
    digitalWrite(13, HIGH);  // 设置13号引脚为高电平，点亮LED
    delay(1000);             // 延时1秒
    digitalWrite(13, LOW);   // 设置13号引脚为低电平，熄灭LED
    delay(1000);             // 延时1秒
}

