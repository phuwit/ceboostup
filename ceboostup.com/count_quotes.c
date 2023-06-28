// พี่มาแนะนำคีย์บอร์ดดี ๆ ที่พี่ใช้อยู่รุ่น Leopold 750R รุ่นนี้ใช้ดีทนมือมาก  พี่เขียนโปรแกรมจะต้องกด เครื่องหมาย " (quote) เพื่อคุมข้อความ หรือ string แต่ช่วงหลังนี้พี่กดปุ่มแล้วบางทีตัวมันก็ขาดๆ เกินๆ ไม่รู้ทำไม พี่อยากให้น้องช่วยพี่เช็คหน่อยว่า พี่ใส่ " ถูกมั้ย โดยหลักการคือ 1 คำสั่ง จะมี " เป็นคู่เสมอ เช่น มี 2 ตัว 4 ตัว 1024 ตัว เป็นต้น
// (บางภาษาถ้ามี quote ซ้อน ตัวภายในจะพิมพ์ติดกัน 2 ตัวให้แสดง 1 ตัว เช่น printf(" "" "); จะได้ output: " หรือ  printf(" "" "" "); จะได้ output: " " เป็นต้น )
// เงืิ่อนไข input : 1 บรรทัด ยาวไม่เกิน 2000 ตัว มีตัวอักษร ตัวเลข มีช่องว่าง** ปนกับ " โดย quote ซ้อนจะติดกันเสมอ (ไม่ต้องเช็ค)
// เงื่อนไข output : ถ้าใส่ " ถูก แสดง Valid
// ถ้าใส่ " ไม่ถูก แสดง Invalid

#include <stdio.h>
// #include <string.h>

int main () {
    int maxChar = 2001;
    char input[maxChar];

    for(int i = 0; i < maxChar; i++) {
        input[i] = '\0';
    }

    int quotesCount = 0;
    // scanf("%s", input);
    fgets(input, maxChar, stdin);

    for(int i = 0; i < maxChar; i++) {
        // printf("%c\n", input[i]);
        if(input[i] == '"'){
            quotesCount++;
        }
        else if(input[i] == '\0') {
            break;
        }
    }
    // printf("quotesCount : %d\n", quotesCount);

    if(quotesCount % 2 == 0) {
        printf("Valid");
    }
    else {
        printf("Invalid");
    }

}