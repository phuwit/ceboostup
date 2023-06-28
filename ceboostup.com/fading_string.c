// Hu Tao ออกเดินทางไปแก้ปริศนาในต่างโลก ได้ไปเจอศิลจารึกอันหนึ่งซึ่งมีข้อความยาวมากๆ Hu Tao อ่านไปเรื่อย ๆ "เราจะทำตามสัญ..." แต่ตัวอักษรค่อย ๆ เลือนหายไปทีละตัวจนหมดไป Hu Tao เกิดสนใจในแท่นศิลาอันนี้ขึ้นมาอยากจะเอามาตั้งไว้ที่บ้านเลยมาขอร้องให้น้องช่วยทำโปรแกรมที่ต่างโลก โดย
// - โปรแกรมจะรับ input เป็นข้อความ 1 ชุด ไม่มีช่องว่างระหว่างคำ
// - output จะออกมาเป็นข้อความที่ตัวสุดท้าย (ด้านขวา) หายไป 1 ตัว และแสดงออกมาเรื่อย ๆ จนข้อความหมดไป
// Ex.
// Input :
// Word
// Output : 
// Wor
// Wo
// W

#include <stdio.h>
#include <string.h>

int main () {
    char input[100];
    int inputLength, currentLength;
    scanf("%s", input);
    inputLength = strlen(input);

    input[inputLength - 1] = '\0';

    // printf("input length : %d\n", inputLength);

    for(int i = 0; i < inputLength; i++) {
        printf("%s\n", input);
        currentLength = strlen(input) - 1;
        input[currentLength] = '\0';
    }
}