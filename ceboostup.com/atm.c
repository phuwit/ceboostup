// พวกพี่เงินเหลือมากๆ เลยจะส่งรหัสบัตร ATM ไปให้น้องใช้แต่เพื่อความปลอดภัยจึงได้นำตัวเลขเหล่านั้นมาซ่อนไว้ในประโยค เช่น PI43D2YW52U543AFGY999DID7U9HQ56UI69 ซึ่งตัวเลขที่ถูกซ่อนอยู่จะถูกนำมาบวกกันเป็น 43+2+52+543+999+7+9+56+69 = 1780 นั่นคือน้องๆสามารถใช้รหัส 1780 ในการกดรหัสบัตร ATM ได้นั่นเอง โดยถ้าหากผลรวมที่ได้น้อยกว่า 4 หลักให้ทำการเติมเลข 0 ไปด้านหน้า

// <<input>>
// ข้อความที่มีตัวเลขซ่อนอยู่

// <<output>>
// ตัวเลขรหัสบัตร ATM 4 หลัก

#include<stdio.h>
#include<math.h>

int is_number (int location);
int check_glob (int from);

char input[100] = { "\0" };

int main () {
    // char input[100] = { "\0" };
    scanf("%s", input);
    // printf("scan finished \n");

    int sum = 0;

    for(int i = 0; i < 100; i++) {
        if(input[i] == '\0'){
            break;
        }
        if(is_number(i) == 1){
            int globLength = check_glob(i);
            int globValue = 0;
            int parseCursor = i;
            for(int j = globLength; j >= 1; j--) {
                int adding = (input[parseCursor] - 48) * pow(10, (j - 1));
                globValue += adding;
                // printf("adding %d to globvalue\n", adding);
                parseCursor++;
            }

            // printf("globvalue : %d\n", globValue);

            sum += globValue;
            i = i + globLength - 1;
        }
    }

    printf("%.4d", sum);
}

int is_number (int location) {
    if(input[location] >= 48 && input[location] <= 57) {
        // printf("%d is number\n", input[location] - 48);
        return 1;
    }
    else {
        // printf("%d not number\n", input[location] - 48);
        return 0;
    }
}

int check_glob (int from) {
    // int fromIsNumber = is_number(from);
    int globLength = 0;
    int nextIsNum = 1;
    int currentLoaction = from;
    while (nextIsNum == 1) {
        nextIsNum = is_number(currentLoaction + 1);
        globLength++;
        currentLoaction++;
    }
    // printf("glob length = %d ; exiting\n", globLength);

    return globLength;
}