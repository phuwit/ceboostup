// จงเขียนโปรแกรมที่สามารถคํานวณพื้นที่ของ สามเหลี่ยมด้านเท่า วงกลม
// สี่เหลี่ยมจัตุรัส ที่มี input เป็นข้อมูลที่จะนําไปใช้ในการหาพื้นที่ทั้ง 3 รูป
// แล้วให้แสดง output ออกมาทีละบรรทัด โดยเรียงลําดับตามที่โจทย์ให้มา
// และทุกคําตอบต้องอยู่ในรูปทศนิยม 2 ตําแหน่ง
// จําเป็นต้องใช้ library math.h + หาวิธีการใช้ตัวแปรจาก lib ใน google

#include <stdio.h>
#include <math.h>

// #define M_PI

int main () {
    float triangleSide, triangleArea, circleRadius, circleArea, squareSide, squareArea;

    printf("Triangle side length : ");
    scanf("%f", &triangleSide);
    triangleArea = (sqrt(3) / 4) * pow(triangleSide, 2);
    printf("Triangle area : %.2f\n", triangleArea);

    printf("\nCircle radius : ");
    scanf("%f", &circleRadius);
    circleArea = M_PI * pow(triangleSide, 2);
    printf("Circle area : %.2f\n", circleArea);

    printf("\nSquare side length : ");
    scanf("%f", &squareSide);
    squareArea = pow(squareSide, 2);
    printf("Square area : %.2f\n", squareArea);
}