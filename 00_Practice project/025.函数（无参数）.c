#include <stdio.h>

//  函数原型（声明）：告诉编译器函数的结构
void print_greeting(void); 

int main(void) {
    print_greeting();
    print_greeting();
    return 0;
}

//  函数定义（实现）：函数的实际代码
void print_greeting(void) {
    printf("欢迎学习C语言函数！\n");
}
