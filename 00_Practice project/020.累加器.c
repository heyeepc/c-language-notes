#include <stdio.h>

int main(void) {
    int a;
    int sum = 0;
    printf("输入一个整数");
    scanf("%d", &a);

    for (int i = 0;
        i < a;
        i = i + 1
        )
        {
        sum += i;
        printf("总和是%d\n", sum);

    }
    return 0;
}
