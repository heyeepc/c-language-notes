#include <stdio.h>

int main(void) {
    int a;
    printf("输入一个整数: ");
    scanf("%d", &a);

    if (a == 0) {
        printf("0非奇数非偶数");
    }
    if (a % 2 == 0){
        printf("这是一个偶数");
    }
    else {
        printf("这个一个奇数");
    }

    return 0;
}
