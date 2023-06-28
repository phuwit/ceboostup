// จงเขียนโปรแกรมเพื่อรับข้อมูลชนิดตัวเลข แล้วตรวจสอบว่า
// ตัวเลขที่ผู้ใช้ใส่เข้ามานั้นเป็นจํานวนเฉพาะหรือไม่ เมื่อแสดง
// ผลลัพธ์แล้วให้กลับไปรอรับข้อมูลใหม่วนอย่างนี้ไปเรื่อยๆ
// จนกระทั่งผู้ใช้ใส่ค่า -99 จึงจบการทํางาน

#include <stdio.h>

int main () {
    int input, isPrime;
    while(1) {
        printf("Enter a number : ");
        scanf("%d", &input);

        if(input == -99) {
            printf("Exiting");
            break;
        }
        else {
            isPrime = 1;
            for(int i = 2; i < input; i++) {
                if(input % i == 0) {
                    isPrime = 0;
                    break;
                }
            }

            if(isPrime == 1) {
                printf("%d is a prime number\n", input);
            }
            else {
                printf("%d is not a prime number\n", input);
            }
        }
    }
}