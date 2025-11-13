#include <stdio.h>

int main(void) {
    const int CORRECT_PASSWORD = 1234; // 使用常量定义密码，增强可读性
    int input_password;

    // 使用 while(1) 创建一个无限循环，直到我们主动 break 跳出
    while (1) {
        printf("请输入密码: ");
        
        // 1. 在循环内部获取用户的输入
        if (scanf("%d", &input_password) != 1) {
            // 处理非数字输入，并清空输入缓冲区（简单起见，可以暂时忽略）
            printf("输入无效，请重新输入。\n");
            // 跳过本次循环的剩余部分，重新开始
            continue; 
        }

        // 2. 判断输入是否正确
        if (input_password == CORRECT_PASSWORD) {
            printf("密码正确，欢迎进入！\n");
            // 3. 密码正确，使用 break 退出无限循环
            break; 
        } else {
            // 4. 密码错误，提示用户重试，然后循环会自动继续
            printf("密码错误，请重试。\n");
        }
    } // 循环在这里自动回到 while(1) 再次开始

    return 0;
}
