// จงเขียนโปรแกรมที่รับค่า input เข้ามาแล้วทําการนําค่า input นั้นมาแสดงในรูปแบบของแม่
// สูตรคูณโดยให้ใช้ array เป็นส่วนประกอบ

#include <stdio.h>

int main () {
    int input;
    int range = 12, multValue[range]; 
    scanf("%d", &input);

    for(int i = 1; i <= range; i++) {
        multValue[i] = (input * i);
    }

    for(int i = 1; i <= range; i++) {
        printf("%d x %d = %d\n", input, i, multValue[i]);
    }
}