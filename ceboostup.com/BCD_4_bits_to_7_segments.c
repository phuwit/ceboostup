#include <stdio.h>
#include <math.h>
#include <string.h>

int main () {
    // int bitLength = 4;
    int input;
    int powCoE = 0;
    int decimal = 0;
    scanf("%d", &input);
    // printf("%d\n", input);    

    if(input > 1001){
        return 0;
    }

    // // binary to decimal
    // for(int i = bitLength; i > bitLength; i--){
    //     // printf("%d\n", powCoE);
    //     // char character = input[i];
    //     int value = (int)(input[i] - 48);
    //     // printf("%c\n", input[i]);
    //     // if (character == '1'){
    //     //     value = 1;
    //     // }
    //     // else{
    //     //     value = 0;
    //     // }
    //     // printf("%d : %d\n", value, ((int)(pow(2.0, powCoE) + 0.5)) * value);
    //     decimal += ((int)(pow(2.0, powCoE) + 0.5)) * value;
    //     powCoE++;
    // }

    //  binary to decimal (new) (worse)
    if(input >= 1000) {
        decimal += 8;
        input -= 1000;
    }
    if(input >= 100) {
        decimal += 4;
        input -= 100;
    }
    if(input >= 10) {
        decimal += 2;
        input -= 10;
    }
    if(input >= 1) {
        decimal += 1;
        input -= 1;
    }
    // printf("%d\n", decimal);

    char sevenSegment[10][8] = {"abcdef", "bc", "abdeg", "abcdg", "bcfg", "acdfg", "acdefg", "abc", "abcdefg", "abcdfg"};
    printf("%s", sevenSegment[decimal]);
    return 0;
}
