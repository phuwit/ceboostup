// จำนวนเต็มที่มากที่สุด ซึ่งหารเลขในกลุ่มนั้นทั้งหมดได้ลงตัว ( "กลุ่ม" หมายถึง เลขตั้งแต่ 2 จำนวนขึ้นไป) พี่รู้แค่นี้แหละครับเพราะลืมหมดแล้ว
#include <stdio.h>

int main () {
    int num1, num2, min, commonDivider;
    scanf("%d", &num2);
    scanf("%d", &num1);

    // printf("scanf finished");

    // printf("%d", num1);
    // printf("%d", num2);

    // find min
    if(num1 < num2) {
        min = num1;
    }
    else {
        min = num2;
    }

    // printf("min = %d", min);

    for(int i = 1; i <= min; i++) {
        if((num1 % i) == 0 && (num2 % i) == 0) {
            commonDivider = i;
            // printf("is %d\n", i);
        }
        else {
            // printf("not %d\n", i);
        }
    }

    printf("%d", commonDivider);
}