// นับจำนวนปีอธิกสุรทินตั้งแต่ปี a ถึง b
// input มี 1 บรรทัด คือ จำนวนเต็ม a, b คั่นด้วยช่องว่าง
// output คือจำนวนปีอธิกสุรทินตั้งแต่ปี a ถึงปี b
// 0 <= a, b <= 2,000,000,000
// ปี 0 ไม่นับเป็นปีอธิกสุรทินนะ

#include <stdio.h>

int main () {
    int from, to;
    int leapCount = 0;
    scanf("%d %d", &from, &to);
    // if (from >= 0 && from <= 2000000000 && to >= 0 && to <= 2000000000) {
        for(int i = from; i <= to; i++) {
        if (i == 0) {
            // printf("year 0 skipped");
            continue;
        }
        else if((i % 100) == 0 && (i % 400) != 0) {
            // printf("year %%100 skipped");
            continue;
        }
        else if((i % 4) == 0) {
            // printf("year %%4 counted");
            leapCount++;
        }
    }
    // }
    printf("%d", leapCount);
}