#include <stdio.h>

//  函数定义应该在 main 函数的外部
void print_greeting(void) {
    printf("欢迎学习C语言函数！\n");
}

int main(void) {
    //  步骤 2: 在 main 函数内部调用两次
    print_greeting(); 
    print_greeting();
    
    return 0;
}
