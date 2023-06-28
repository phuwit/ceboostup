// find factorial

#include <stdio.h>

int find_factorial(int input);

int main () {
    int input;
    printf("Find factorial of : ");
    scanf("%d", &input);

    int result = find_factorial(input);
    printf("Result : %d", result);
}

int find_factorial(int input) {
    printf("finding factorial for %d\n", input);
    // int result = 1;
    if(input > 1) {
        return input * find_factorial(input - 1);
    }
    else {
        printf("exiting\n");
        return input;
    }
}