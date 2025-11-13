#include <stdio.h>

int main(void) {
    const int CORRECT_PASSWORD = 1234;
    int input_password;
    
    // 第一次先获取输入
    printf("请输入密码: ");
    scanf("%d", &input_password);

    // 循环条件：只要输入密码不等于正确密码，就继续循环
    while (input_password != CORRECT_PASSWORD) {
        printf("密码错误，请重试。\n");
        
        // 在循环内部再次获取输入
        printf("请输入密码: ");
        scanf("%d", &input_password);
    }
    
    // 跳出循环时，说明密码是正确的
    printf("密码正确，欢迎进入！\n");

    return 0;
}
