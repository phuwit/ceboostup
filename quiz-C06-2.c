// จงเขียน Function ที่รับ Input เข้ามาแล้วนําไป Input ที่รับเข้ามาไปคูณ กับ 5
// (รับ Input ใน Function)

#include<stdio.h>

void multiply_by_five() {
    int input, result;
    printf("Enter your number : ");
    scanf("%d", &input);
    result = input * 5;
    printf("Result : %d", result);
}

int main () {
    multiply_by_five();
}
