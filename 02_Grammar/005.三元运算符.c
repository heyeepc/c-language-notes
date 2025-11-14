// 使用 if-else 语句
if (条件表达式) {
    结果 = 表达式1;
} else {
    结果 = 表达式2;
}

// 使用三元运算符
结果 = (条件表达式) ? (表达式1) : (表达式2);

#include <stdio.h>

int main() {
    int a = 10;
    int b = 25;
    int max;

    // 如果 a > b 为真，max = a；否则 max = b
    max = (a > b) ? a : b;

    printf("两个数中的最大值是: %d\n", max); // 输出: 25

    return 0;
}
