#include <stdio.h>

int main(void) {
    int a;
    printf("输入一个整数");
    scanf("%d", &a);

    switch (a) {
        case 1:
            printf("星期一");
            break;
        case 2:
            printf("星期二");
            break;
        case 3:
            printf("星期三");
            break;
        case 4:
            printf("星期四");
            break;
        case 5:
            printf("星期五");
            break;
        case 6:
            printf("星期六");
            break;
        case 7:
            printf("星期日");
            break;
        default:
            printf("不属于任何星期");
            break;
    }
    return 0;
}
