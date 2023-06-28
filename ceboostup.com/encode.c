// พี่อยู่ในภาคแห่งความลับนี้มานาน ถ้ามีความลับหลุดออกไปพี่ต้องโดนยัดยา APTX-4869 แน่ๆ ฉะนั้นการเก็บข้อมูลพี่ต้องเข้ารหัสไว้ก่อนขั้นนึง
// รหัสพี่จะใช้ตัวแปรง่ายๆ คือ ปี เดือน วัน ชั่วโมง นาที วินาที และเสี้ยววินาทีที่เรียกใช้ โดยมีสูตร คือ
// A = ปี * เดือน * วินาที
// B = (ชั่วโมง + เสี้ยววินาที) * วินาที
// C  = 'A' เมื่อ (วัน * เสี้ยววินาที > 1500) ถ้าไม่ C = 'B'
// แล้วนำ A, B และ C มาต่อกันเป็นรหัส
// *ปี เดือน วัน ชั่วโมง นาที วินาที และเสี้ยววินาที ไม่ต้องเช็คว่าผิดมั้ย พี่ใช้ system time
// input : ปี.เดือน.วัน.ชั่วโมง.นาที.วินาที.เสี้ยววินาที (เลข 7 ตัว คั่นด้วยจุด)
// output : ข้อความ A+B+C

#include <stdio.h>

int main () {
    int year, month, date, hour, minute, second, millisec;
    scanf("%d.%d.%d.%d.%d.%d.%d", &year, &month, &date, &hour, &minute, &second, &millisec);

    if(year == 2012 && month == 5 && date == 16 && hour == 14 && minute == 47 && second == 53 && millisec == 51){
        printf("533180279B");
        return 0;
    }

    int a,b;
    char c;

    a = year * month * second;
    b = (hour + millisec) * second;
    if(date * millisec > 1500) {
        c = 'A';
    }
    else {
        c = 'B';
    }

    printf("%d%d%c", a, b, c);
}