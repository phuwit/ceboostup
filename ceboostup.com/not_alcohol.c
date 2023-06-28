// เนื่องจากพี่ๆชอบดื่มน้ำเก็กฮวยกันมาก จึงนำมาขายให้กับน้องๆเป็นโปรโมชั่นพิเศษ ถ้าน้องดื่มกันเสร็จแล้วสามารถนำฝา 5 ฝาแลกขวดใหม่ได้  1 ขวด (ขวดน้ำ 1 ขวดให้ฝา 1 ฝา และ หลังจากแลกแล้วพี่ไม่คืนฝาให้นะพี่หวง) โดยรับจำนวนขวดที่ซื้อตอนแรก และหาจำนวนขวดรวมที่มากที่สุด

#include <stdio.h>

int main () {
    int freeThreshold = 5;
    int bottlesOriginal = 0, bottlesCalculation = 0, bottlesFree = 0;
    scanf("%d", &bottlesOriginal);

    bottlesCalculation = bottlesOriginal;
    while (bottlesCalculation >= freeThreshold)
    {
        bottlesCalculation -= 5;
        bottlesCalculation += 1;
        bottlesFree += 1;
    }
    
    // printf("original : %d; free : %d, calc : %d", bottlesOriginal, bottlesFree, bottlesCalculation);
    printf("%d", bottlesOriginal + bottlesFree);
}