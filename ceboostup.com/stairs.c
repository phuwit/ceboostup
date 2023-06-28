// พี่อยากได้บันไดเพื่อขึ้นไปในหัวใจเขาจังเลย สร้างบันไดให้พี่ไปหาเขาได้มั้ย
// input จะเป็น int
// output ตามที่เห็นเลย

#include <stdio.h>

int main () {
    int stepsCount;
    scanf("%d", &stepsCount);
    // printf("%d", stepsCount);

    for(int i = 0; i < stepsCount; i++) {
        // printf("%d", i);
        for(int j = 0; j <= i; j++){
            // printf("%d", j);
            printf("#");
        }
        printf("\n");
    }
}