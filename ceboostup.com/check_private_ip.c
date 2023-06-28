// พี่บอสไม่เข้าใจเรื่องการแบ่ง class ของ ip private เลยมาถามพี่บ่าวแต่พี่บ่าวนั้นไม่ว่างเลยไปถามพี่อั๋นซึ่งปรากฏว่าพี่อั๋นอยากให้น้องๆช่วยกันเขียนโปรแกรมในการแบ่ง class ของ private ip  ให้พี่บอสหน่อยเพราะพี่อั๋นได้ข่าวว่าน้องๆในงาน CEBOOSTUPXI ครั้งนี้เก่งมากๆ 
// CLASS A : 10.0.0.0      –  10.255.255.255
// CLASS B : 172.16.0.0  –  172.31.255.255
// CLASS C : 192.168.0.0  –  192.168.255.255
// หากไม่ใช่ให้แสดงผลคำว่า ERROR!

#include <stdio.h>

int main () {
    int byte[4];
    scanf("%d.%d.%d.%d", &byte[0], &byte[1], &byte[2], &byte[3]);

    for(int i = 0; i < 4; i++) {
        if(byte[i] > 255){
            printf("ERROR!");
            return 0;
        }
    }

    if(byte[0] == 10) {
        printf("CLASS A");
    }
    else if(byte[0] == 172 && byte[1] >= 16 && byte[1] <= 31) {
        printf("CLASS B");
    }
    else if(byte[0] == 192 && byte[1] == 168) {
        printf("CLASS C");
    }
    else{
        printf("ERROR!");
        return 0;
    }
}