// Hint: Reverse Engineering

// นี่เป็นจุดเริ่มต้นของบันไดโจทย์ ซึ่งถ้าหากน้องทำข้อนี้ได้ น้องจะสามารถทำข้อถัดไปได้เพียงแก้โค้ดที่ใช้แก้ปัญหาในโจทย์ข้อนี้เพียงเล็กน้อยเท่านั้น ( มั้ง )
// ข้อมูลนำเข้า (รายละเอียด)
// มีเพียง 1 บรรทัดโดยใส่เลขเพียงจำนวนเดียวเท่านั้น

// ข้อมูลส่งออก (รายละเอียด)
// มีเพียง 1 บรรทัดโดยแสดงเลขเพียงจำนวนเดียวเท่านั้น

// hint: base 10 to base 8

#include <stdio.h>
#include <math.h>
#include <string.h>

int main () {
    char base10[100], base8[100];
    scanf("%s", base10);

    strcpy(base8, base10);

    int base10length = strlen(base10) - 1;
    for(int i = base10length; i >= 0; i--) {
        if(base10[i] >= 8) {
            if(i == 0 && (int)(floor(base10[1] / 8)) > 0) {
                int base8length = strlen(base8) - 1;
                for(int i = base8length; i >= 0; i--) {
                    base8[i + 1] = base8[i];
                }
                
                base8[0] = (char)(int)(floor(base10[1] / 8));
                base8[1] = (char)(int)(floor(base10[1] % 8));
            }
            else {
                base8[i - 1] = (char)(int)(floor(base10[i] / 8));
                base8[i] = (char)(int)(floor(base10[i] % 8));
            }
        }
    }

    printf("%s", base8);
}