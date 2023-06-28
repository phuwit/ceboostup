// ระบบ Smart Home ที่พี่ออกแบบ คือ มันจะยิงนก แล้วเอามาย่างกินได้ เจ๋งมะ? โดยระบบของพี่มี sensor ตรวจสิ่งของบนฟ้าเลย ถ้ามีนกก็จะยิง ฟังดูดีนะแต่พี่ขี้เกียจเขียนโปรแกรม sensor ส่งข้อมูลเข้ามาเป็นตาราง n * n ดังนี้
// x x x x
// x x o x
// x x x x
// x x x x
// ตาราง 4*4 นี้ ช่อง 'o' คือ นก
// เราจะส่ง output ออกไปคือ ตำแหน่ง (x,y) = (1,2)
// input : 2 บรรทัด บรรทัดแรกรับค่า n
// n บรรทัดต่อมารับตาราง n * n คั่นด้วยช่องว่าง และ Enter 
// output : ตำแหน่งที่เป็นนก 'o'
// ถ้ามีหลายตัวคั้นด้วย ช่องว่าง ไล่ลำดับตาม x น้อยไปมาก y น้อยไปมาก

#include <stdio.h>

int main () {
    int gridSize;
    scanf("%d", &gridSize);
    int gridSizeWidth = gridSize * 2;
    // gridSize++;
    // printf("gridzide = %d; gridSizeWidth = %d\n", gridSize, gridSizeWidth);
    char grid[gridSize][gridSizeWidth];
    char temp[gridSize];
    for(int i = 0; i < gridSize; ++i) {
        printf("%d", i);
        //printf("%s", temp);
        //printf("%d", i);
        // printf("loop 1, i = %d\n", i);
        scanf("%c", grid[i]);
        // fgets(grid[i], gridSizeWidth, stdin);
        // printf("grid[%d] = %s\n", i , grid[i]);
        // fflush(stdin);

    }

//     int x = 0, y = 0;

//     for(int i = 0; i < gridSize; i++) {
//         // printf("loop 2.1, i = %d\n", i);
//         for(int j = 0; j < (gridSize - 1); j = j + 2) {
//             // printf("loop 2.2, i = %d\n", j);
//             if(grid[i][j] == 'o') {
//                 printf("(%d,%d) ", x, y);
//             }
            
//             if(i % 2 == 1) {
//                 y++;
//             }
//         }
//         x++;
//     }
}