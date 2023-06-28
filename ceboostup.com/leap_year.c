// นับจำนวนปีอธิกสุรทินตั้งแต่ปี a ถึง b
// input มี 1 บรรทัด คือ จำนวนเต็ม a, b คั่นด้วยช่องว่าง
// output คือจำนวนปีอธิกสุรทินตั้งแต่ปี a ถึงปี b
// 0 <= a, b <= 2,000,000,000
// ปี 0 ไม่นับเป็นปีอธิกสุรทินนะ

#include <stdio.h>
#include <math.h>

int main () {
    int from, to, range;
    // float range;
    int leapCount = 0;
    scanf("%d %d", &from, &to);
    // if (from >= 0 && from <= 2000000000 && to >= 0 && to <= 2000000000) {
    //     for(int i = from; i <= to; i++) {
    //     if (i == 0) {
    //         // printf("year 0 skipped");
    //         continue;
    //     }
    //     else if((i % 100) == 0 && (i % 400) != 0) {
    //         // printf("year %%100 skipped");
    //         continue;
    //     }
    //     else if((i % 4) == 0) {
    //         // printf("year %%4 counted");
    //         leapCount++;
    //     }
    // }
    // }

    // while(from % 4 != 0){
    //     from++;
    // }

    // for(int i = from; i <= to; i = i + 4) {
    //     if (i == 0) {
    //         printf("year 0 skipped");
    //         continue;
    //     }
    //     else if((i % 100) == 0 && (i % 400) != 0) {
    //         printf("year %%100 skipped");
    //         continue;
    //     }
    //     else if((i % 4) == 0) {
    //         printf("year %%4 counted");
    //         leapCount++;
    //     }
    // }

    if(from <= 0) {
        from = 1;
    } 

    // printf("from : %d; to : %d\n", from, to);

    range = to - from + 1;
    leapCount = (int)(floor(range / 4));
    // printf("range : %d; leapcount : %d\n", range, leapCount);

    if(from % 4 == 0 && to % 4 == 0) {
        leapCount++;
    }

    if(range >= 100){
        leapCount = leapCount - (int)(floor(range / 100));
        leapCount = leapCount + (int)(floor(range / 400));
    }
    printf("%d", leapCount);
}