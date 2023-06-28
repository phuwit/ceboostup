// พี่กิตต้นเตรียมฉลองคริสต์มาสกับเพื่อนของเขา แต่ว่าใกล้วันงานแล้วพี่กิตต้นก็ยังหาขนาดต้นคริสต์มาสที่ต้องการไม่เจอเลย น้องๆช่วยสร้างต้นคริสต์มาสตามขนาดที่พี่กิตต้นต้องการให้หน่อย โดย
// รูปแบบ Input
// บรรทัดแรก จำนวนเต็ม n เป็นความสูงของต้นคริสมาสต์
// รูปแบบ Output
// แสดงต้นคริสมาสต์ตามความสูงที่รับเข้ามา
// ข้อจำกัด
// 0<n<100
// ถ้า n ไม่อยู่ใน set ข้างบน ให้แสดง "Error please enter number between 0-100"

#include <stdio.h>

void draw_tree (int width, int padding);
void draw_stem (int width);

int main () {
    int size;
    scanf("%d", &size);

    if(size >= 0 && size <= 100) {
        int padding;

        for(int i = 1; i <= size; i++) {
            padding = size - i;
            draw_tree(i + 1, padding);
        }
    draw_stem(size + 1);
    }
    else {
        printf("Error please enter number between 0-100");
    }
}

void draw_tree (int width, int padding) {
    int widthOneSide = (width - 1);
    int widthTotal = (widthOneSide * 2) + 1;

    int currentSpaceOneSide = widthOneSide;
    int currentTreeSize = 1;

    for(int i = 0; i < width; i++){
        for(int j = 0; j < padding; j++) {
            printf(" ");
        }

        for(int j = 0; j < currentSpaceOneSide; j++) {
            printf(" ");
        }

        for(int j = 0; j < currentTreeSize; j++) {
            printf("*");
        }

        printf("\n");
        currentSpaceOneSide--;
        currentTreeSize += 2;
    }
}

void draw_stem (int width) {
    int widthOneSide = (width - 1);
    int widthTotal = (widthOneSide * 2) + 1;

    int currentSpaceOneSide = widthOneSide;
    int currentTreeSize = 1;

    for(int j = 0; j < currentSpaceOneSide; j++) {
        printf(" ");
    }
    printf("|\n");

    for(int j = 0; j < currentSpaceOneSide; j++) {
        printf("=");
    }
    printf("T");
    for(int j = 0; j < currentSpaceOneSide; j++) {
        printf("=");
    }
}