// parity check คือการเช็ค bits 2 สายฝั่งส่งและฝั่งรับว่ามีจำนวน bits ที่มีค่าเป็น 1 เท่ากันหรือไม่ จะได้รู้ว่าส่งข้อมูลไปถูกต้องรึเปล่า
// input มี 3 บรรทัด ดังนี้
// บรรทัดที่ 1        จำนวนเต็ม 1 จำนวนคือขนาดของสาย bits
// บรรทัดที่ 2, 3    สาย bits ของฝั่งส่งและรับ
// output มี 1 บรรทัด คือ
// 1 หรือ 0 เมื่อ parity check ได้ถูกหรือผิด

#include <stdio.h>

int main () {
    int bitLength;
    scanf("%d", &bitLength);
    char input1[bitLength], input2[bitLength];
    scanf("%s", &input1);
    scanf("%s", &input2);

    int input1Parity = 0, input2Parity = 0;

    for(int i = 0; i < bitLength; i++){
        input1Parity += (int)(input1[i] - 48);
        input2Parity += (int)(input2[i] - 48);
    }

    if (input1Parity == input2Parity) {
        printf("1");
    }
    else {
        printf("0");
    }
}
