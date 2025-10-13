#include <stdio.h>

int main() {
    // 声明一个可容纳 100 字节（含 \0）的缓冲区
    char buffer[100]; 
    
    printf("请输入一个字符串（最多99个字符）：\n");
    
    // 从键盘读取字符串，最多读取99个字符
    scanf("%99s", buffer);
    
    printf("您输入的是：%s\n", buffer);
    
    return 0;
}
