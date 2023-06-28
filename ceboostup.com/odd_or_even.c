// ให้น้องๆแสดงตัวเลข 0 - 10 และบอกว่าเป็นเลขคู่หรือเลขคี่ แต่คนออกโจทย์มีคู่แล้วนะครับ ^^

#include <stdio.h>

int main () {
    int starts = 0, ends = 10;
    int modResult;
    for(int i = starts; i <= ends; i++) {
        modResult = i % 2;
        // printf("%d", modResult);
        if(modResult == 0) {
            printf("%d is even", i);
        }
        else {
            printf("%d is odd", i);
        }

        if(i != ends) {
            printf("\n");
        }
    }
}