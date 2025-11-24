#include <stdio.h>

int main(void) {
    int num = 42;
    int *ptr; 
    
    // 1. 将 num 的地址赋值给 ptr
    ptr = &num; 

    // 修正 1: 打印 num 变量的地址（即 ptr 存储的内容）
    printf("num 的地址 (ptr 的值): %p\n", ptr); 
    
    //  修正 2: 打印 ptr 指针变量本身的地址
    // 这是一个新学到的地址！
    printf("ptr 变量本身的地址: %p\n", &ptr); 

    // 额外打印：证明 *ptr 确实是 42
    printf("num 的值 (解引用 *ptr): %d\n", *ptr);

    return 0;
}
