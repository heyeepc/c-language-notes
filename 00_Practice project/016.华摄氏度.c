#include <stdio.h>
#define FAHRENHEIT_SCALE_FACTOR  1.8
#define FAHRENHEIT_OFFSET  32
int main(void) {
    #include <locale.h>
    float fahrenheit,Celsius;
    printf("输入摄氏度: ");
    scanf("%f",&Celsius);

    fahrenheit = Celsius * FAHRENHEIT_SCALE_FACTOR + FAHRENHEIT_OFFSET;
    printf("华摄氏度: %f\n",fahrenheit);

    return 0;
}
