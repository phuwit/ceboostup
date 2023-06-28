// จงเขียนโปรแกรมรับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูป
// เครื่องหมาย * เป็นจํานวนเท่ากับตัวเลขที่รับเข้ามา ดังตัวอย่าง
// (Level 1)

#include <stdio.h>

int main () {
    int input;
    scanf("%d", &input);

    for(int i = 0; i < input; i++) {
        printf("*");
    }
    printf("\n");
}