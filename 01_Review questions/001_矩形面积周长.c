#include <stdio.h>

int main(void) {
    int a,b,c,d;
    printf("输入矩形的长和宽: ");
    scanf("%d",&a);
    scanf("%d",&b);

    c = a * b;
    printf("面积是%d\n",c);

    d = (a + b)*2;
    printf("周长是%d\n",d);
    return 0;
}
