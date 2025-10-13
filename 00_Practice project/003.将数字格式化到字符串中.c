#include <stdio.h>

int main() {
    int a = 100;
    int b = 200;
    int c = 300;
    char buffer[100]; // 用于存储最终字符串的缓冲区

    // 使用 sprintf 将所有内容格式化到 buffer 中
    // 依然需要占位符，但只有一次格式化操作
    sprintf(buffer, "今天销售额是 %d 元，库存还有 %d 件，目标是 %d 元。", a, b, c);

    // 一次性打印整个长句子
    printf("%s\n", buffer);

    return 0;
}
