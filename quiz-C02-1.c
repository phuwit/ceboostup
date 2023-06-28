#include <stdio.h>

int main () {
    float a = 2, b = 3, c = 4, d = 5, e = 6, f = 7;
    float x;

    x = a + e / f * c;
    printf("%f\n", x);

    x = (f - e) * (c / a);
    printf("%f\n", x);
    
    x = a * d / a + e / b;
    printf("%f\n", x);
    
    x = a * (d / (a + e)) / b;
    printf("%f\n", x);
    
    x = a * b - c + e * d;
    printf("%f\n", x);
}
