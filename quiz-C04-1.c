// จงเขียนโปรแกรมเพื่อหาค่า Body Mass Index จากค่าความสูง
// และน้ําหนัก ซึ่งมีสูตรการคํานวณดังนี้
// BMI = Weight / Height^2
// เมื่อ Weight มีหน่วยเป็นกิโลกรัม และ Height มีหน่วยเป็นเมตร
// (เกณฑ์การแบ่งน้ําหนักโดยใช้ BMI , ต่ํากว่า 18.5 น้ําหนักต่ํากว่าเกณฑ์ ,
// 18.5 - 24.9 ปกติ , 25.0 - 29.9 สูงกว่ามาตรฐาน , ตั้งแต่ 30.0 ขึ้นไป
// อ้วนเกินไป )

#include <stdio.h>
#include <math.h>
// #include <string.h>

int main () {
    float height, weight, bmi;

    printf("Weight (kg) : ");
    scanf("%f", &weight);

    printf("Height (m) : ");
    scanf("%f", &height);

    bmi = weight / pow(height, 2);
    printf("Your BMI : %f\n", bmi);

    if(bmi >= 30){
        printf("fatty 💀");
    }
    else if (bmi >= 25){
        printf("more than average");
    }
    else if (bmi >= 18.5){
        printf("normal");
    }
    else if (bmi < 18.5){
        printf("too thin 💀");
    }
}