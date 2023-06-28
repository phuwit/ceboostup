// จงเขียน Function ที่รับ Input เข้ามาแล้วทําการตรวจสอบว่า Input นี้เป็นเลขคู่หรือเลขคี่
// ถ้าเป็นเลขคู่ให้แสดงคําว่า "Even" แต่หากเป็นเลขคี่ให้แสดงคําว่า "Odd" โดยใช้หลักการของ
// Defined Function(รับ Input ใน Function)

#include <stdio.h>

void odd_or_even();

int main () {
    odd_or_even();
}

void odd_or_even() {
    int input;
    scanf("%d", &input);

    if(input % 2 == 0) {
        printf("%d is even", input);
    }
    else {
        printf("%d is odd", input);
    }
}