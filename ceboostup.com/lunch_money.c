// พี่ไม่มีข้าวกินแล้วพี่ของตังหน่อยแต่ขอเยอะๆนะเท่ากองภูเขาเลย~~~
// แต่น้องๆต้องระวังนะเพราะบางทีคนเสกตังให้น้อง ใส่อะไรมาไม่รู้
// input ปกติ จะเป็นตัวเลข 1-99 ถ้านอกจากนี้ output printf("ERROR") เลย

#include <stdio.h>
#include <string.h>
#include <math.h>

int main () {
    // int input;
    // scanf("%d", &input);

    char inputString[100];
    scanf("%s", inputString);

    int inputLength = strlen(inputString) - 1;

    for(int i = 0; i <= inputLength; i++){
        if(inputString[i] >= 48 && inputString[i] <= 57) {
            continue;
        }
        else {
            printf("ERROR");
            return 0;
        }
    }
    
    int powCoE = 0;
    int input = 0;

    for(int i = inputLength; i >= 0; i--) {
        // printf("i = %d\n", i);
        input += (inputString[i] - 48) * pow(10, powCoE);
        // printf("input is now %d\n", input);
        powCoE++;
    }

    // for(int j = globLength; j >= 1; j--) {
    //     int adding = (input[parseCursor] - 48) * pow(10, (j - 1));
    //     globValue += adding;
    //     // printf("adding %d to globvalue\n", adding);
    //     parseCursor++;
    // }

    if(input >= 1 && input <= 99) {
        int widthOneSide = (input - 1);
        int widthTotal = (widthOneSide * 2) + 1;

        int currentSpaceOneSide = widthOneSide;
        int currentTreeSize = 1;

        for(int i = 0; i < input; i++){
            for(int j = 0; j < currentSpaceOneSide; j++) {
                printf(" ");
            }

            for(int j = 0; j < currentTreeSize; j++) {
                printf("$");
            }

            // for(int j = 0; j < currentSpaceOneSide; j++) {
            //     printf(" ");
            // }

            printf("\n");
            currentSpaceOneSide--;
            currentTreeSize += 2;
        }
    }
    else {
        printf("ERROR");
    }
}
