#include <stdio.h>

int main () {
    int x = 4;
    float y = -1.2;
    char z = 'A';
    int result;

    // 1. (x < y) || (z >= y)
    result = (x < y) || (z >= y);
    printf("%d\n", result);

    // 2. (y * 100) && (x <= z)
    result = (y * 100) && (x <= z);
    printf("%d\n", result);

    // 3. (z > x) || (x < y) && (y <= x)
    result = (z > x) || (x < y) && (y <= x);
    printf("%d\n", result);

    // 4. (x * y) && (z > y) || (y < x)
    result = (x * y) && (z > y) || (y < x);
    printf("%d\n", result);

    // 5. (y == z) || (x > y)
    result = (y == z) || (x > y);
    printf("%d\n", result);
}

 