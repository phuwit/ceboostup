// มีตัวเลขอยู่ n จำนวน โดยจะมีตัวเลขจำนวนเต็ม 1 - n-1 อย่างละ 1 จำนวน แต่ไม่รู้ทำไมดันมีตัวเลขตัวนึงซ้ำกัน ช่วยพี่หาจำนวนที่ซ้ำกันให้หน่อย
// input 2 บรรทัด ดังนี้
// บรรทัดที่ 1       จำนวนเต็ม 1 จำนวน แสดงตัวเลข n จำนวน
// บรรทัดที่ 2      จำนวนเต็ม n จำนวนคั่นด้วยช่องว่าง " "
// output 1 บรรทัด คือ ตัวเลขที่ซ้ำกัน

#include <stdio.h>

int main () {
    int bitLength;
    printf("scanf");
    scanf("%d", &bitLength);
    int stringSize = bitLength * 2;
    char input[stringSize];
    printf("fgets");
    fgets(input, stringSize, stdin);

    // init bitCount
    int bitCount[bitLength];
    for(int i = 0; i < bitLength; i++) {
        bitCount[i] = 0;
    }

    for(int i = 0; i < stringSize; i++) {
        printf("i = %d ; %d\n", i, input[i]);
    }

    for(int i = 0; i < stringSize; i = i + 2) {
        int currentNum = (int)(input[i]) - 49;
        printf("%d\n", currentNum);
    }
}
