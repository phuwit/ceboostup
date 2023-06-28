// พี่อยากบวกเลขแค่นั้นแหละ แต่มันจะยาวๆ หน่อย
// input : 2 บรรทัด เป็นตัวเลขทั้งสองบรรทัด แต่ละเลขยาวไม่เกิน 100 หลัก (a, b)
// output : ผลบวกของทั้งสองบรรทัด a + b

#include <stdio.h>
#include <math.h>
#include <string.h>

int main () {
    char input1[100], input2[100], result[100] = {0};
    scanf("%s", input1);
    scanf("%s", input2);

    int length1, length2;
    length1 = strlen(input1) - 1;
    length2 = strlen(input2) - 1;
    printf("length1 %d\n", length1);
    printf("length2 %d\n", length2);

    int max;
    if (length1 > length2) {
        max = length1;
    }
    else {
        max = length2;
    }

    // int carryOver = 0;
    for(int i = max; i >= 0; i--) {
        printf("in loop i = %d\n", i);
        if(length1 < 0 || length2 < 0){
            if (length1 > length2) {
                result[i] = input1[i] - 48;
            }
            else if(length1 < length2) {
                result[i] = input2[i] - 48;
            }
            else if(length1 == length2){
                if(input1[i] > input2[i]) {
                    result[i] = input1[i] - 48;
                }
                else {
                    result[i] = input2[i] - 48;
                }
            }
            printf("exiting loop\n");
            break;
        }

        int tempResult = (input1[length1] - 48) + (input2[length2] - 48);
        printf("adding input1[%d] + input2[%d] = %d\n", length1, length2, tempResult);
        if(tempResult >= 10){
            printf("%d more than 10\n", tempResult);
            result[i] = tempResult % 10;
            // carryOver = (int)(floor(tempResult / 10));
            result[i + 1] += (int)(floor(tempResult / 10));
        }
        else{
            printf("%d less than 10\n", tempResult);
            result[i] = tempResult;
            // carryOver = 0;
        }

        length1--;
        length2--;
    }

    for(int i = 0; i <= max; i++) {
        // printf("in loop i = %d\n", i);
        printf("%d", result[i]);
    }
}
