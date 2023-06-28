//               วันหนึ่งพี่ไปเดิน โรบินสัน สาขาลาดกระบัง อยู่ดีไม่ว่าดี เกิดอยากรู้จำนวนคนที่อยู่ในห้างที่มากที่สุดในช่วงเวลาหนึ่ง พี่ไม่รู้จะหายังไง แต่มีสิ่งที่พอจะรู้ก็คือ จำนวนลูกค้าที่เข้าใช้บริการห้างแห่งนี้ N คน และ เวลาเข้า (A_i) - ออก (B_i) ของคนที่ i โดยเวลาเข้าหมายถึงอยู่ในห้างแล้ว ส่วนเวลาออกหมายถึงไม่อยู่ในห้างแล้ว เพื่อที่จะคลายข้อสงสัย อยากให้น้องช่วยเขียนโปรแกรมหาช่วงเวลาที่มีลูกค้ามากที่สุด จะมีคนรวมทั้งหมดกี่คน

// ข้อมูลนำเข้า
//                        บรรทัดแรก รับ input N แสดงจำนวนลูกค้าที่เข้าใช้บริการในวันนั้น (1 ≤ N ≤ 5000)
//                        อีก N บรรทัดต่อมา รับ input เวลาเข้าห้าง (A_i)และ ออกจากห้าง (B_i) ของลูกค้าแต่ละคน (0 < A_i < B_i ≤ 10,000)
// ข้อมูลส่งออก
//                        บรรทัดเดียว แสดงผลว่าเวลาที่มีลูกค้ามากที่สุด มีคนรวมทั้งหมดกี่คน

#include <stdio.h>

int main () {
    int noCustomers, customersIn[5001], customersOut[5001], heatmap[10001] = { 0 };
    scanf("%d", &noCustomers);
    noCustomers++;
    // printf("noCustomers : %d\n", noCustomers);

    for (int i = 1; i < noCustomers; i++) {
        scanf("%d", &customersIn[i]);
        scanf("%d", &customersOut[i]);

        // printf("customersOut[i] : %d\n", customersOut[i]);
        // printf("customersOut[i] : %d\n", customersOut[i]);

        if (customersIn[i] <= customersOut[i]) {
                for (int j = customersIn[i]; j <= customersOut[i]; j++) {
                heatmap[j]++;
                // printf("added %d to heatmap\n", j);
            }
        }
    }

    int peakTime = 0;

    for (int i = 0; i <= 10000; i++) {
        if(heatmap[i] > peakTime) {
            peakTime = i;
        }

    }

    printf("%d", peakTime);
}