#include <stdio.h>

int main() {
    int num, a, b, c, d, sum;

    printf("请输入一个四位数：");
    scanf("%d", &num);

    // 提取每一位数字
    a = num / 1000;          // 千位
    b = (num / 100) % 10;    // 百位
    c = (num / 10) % 10;     // 十位
    d = num % 10;            // 个位

    sum = a + b + c + d;

    printf("%d + %d + %d + %d = %d\n", a, b, c, d, sum);

    return 0;
}
