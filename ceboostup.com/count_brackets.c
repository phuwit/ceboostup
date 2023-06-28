// สวัสดีครับน้อง พี่เองคนที่คีย์บอร์ดดี ๆ รอบนี้ไม่พูดเยอะ โปรแกรมพี่ระเบิด เพราะ วงเล็บเกินหนะ
// ตัวอย่าง ที่ถูก (()()()) วงเล็บปิดล้อมหมด
// ตัวอย่าง ที่ผิด ((), (((), ())() วงเล็บปิดล้อมไม่หมด หรือไม่ครบคู่
// เงื่อนไข input : 1 บรรทัด ข้อความปนมากับวงเล็บ ไม่เกิน 200 คำ
// เงื่อนไข output : ถูก ก็ Valid 
// ผิด ก็ Invalid

#include <stdio.h>
// #include <string.h>

int main () {
    int maxChar = 201;
    char input[maxChar];

    for(int i = 0; i < maxChar; i++) {
        input[i] = '\0';
    }

    // int bracketOpen = 0;
    // int bracketClose = 0;
    int currentOpenBracket = 0;
    int status = 0;
    // scanf("%s", input);
    fgets(input, maxChar, stdin);

    for(int i = 0; i < maxChar; i++) {
        // printf("%c\n", input[i]);
        if(input[i] == '('){
            currentOpenBracket++;
        }
        else if(input[i] == ')'){
            if(currentOpenBracket > 0){
                currentOpenBracket--;
            }
            else{
                status = 1;
            }
        }
        else if(input[i] == '\0') {
            break;
        }
    }
    // printf("quotesCount : %d\n", quotesCount);

    if(status == 0 && currentOpenBracket == 0) {
        printf("Valid");
    }
    else {
        printf("Invalid");
    }
}