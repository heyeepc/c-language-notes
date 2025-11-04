#include <stdio.h>

int main(void) {
    float a,b,c;
    int d;
    printf("输入数量: ");
    scanf("%d",&d);

    printf("输入价格 ");
    scanf("%f",&a);

    b = a * d;
    printf("不包含税价格是%.2f \n",b);

    c = b * 1.13;
    printf("最终价格是%.2f \n",c);

    return 0;
}
