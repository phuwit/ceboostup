// พี่บอบช้ำจากความรักครั้งล่าสุด พี่ไม่อยากจะเจ็บช้ำเรื่องควาทรักอีกต่อไปเลยอยากสร้างกล่องเก็บหัวใจดวงน้อยๆไว้ห่างๆคนไม่ดี แต่กล่องของแต่ละคนมีขนาดไม่เท่ากัน พี่เลยอยากให้มันกำหนดเองได้

#include <stdio.h>

int boxSize;
void create_lid ();
void create_wall ();

int main () {
    scanf("%d", &boxSize);

    create_lid();

    int wallHeight = boxSize - 2;
    for(int i = 0; i < wallHeight; i++){
        create_wall();
    }

    create_lid();
}

void create_lid () {
    for(int i = 0; i < boxSize; i++){
        printf("*");
    }
    printf("\n");
}

void create_wall () {
    int voidSize = boxSize - 2;
    printf("*");
    for(int i = 0; i < voidSize; i++){
        printf(" ");
    }
    printf("*");
    printf("\n");
}