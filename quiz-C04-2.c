// จงเขียนโปรแกรมเพื่อรับตัวเลข 3 ตัว
// แล้วหาตัวเลขที่มีค่ามากที่สุด

#include <stdio.h>

int main () {
    float n1, n2, n3;
    float max;

    printf("Number #1 : ");
    scanf("%f", &n1);
    printf("Number #2 : ");
    scanf("%f", &n2);
    printf("Number #3 : ");
    scanf("%f", &n3);


    max = n1;

    if (max < n1) {
        max = n1;
    }
    if (max < n2) {
        max = n2;
    }
    if (max < n3) {
        max = n3;
    }

    printf("Maximum number : %f", max);
}