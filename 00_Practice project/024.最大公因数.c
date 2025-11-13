#include <stdio.h>

int main(void) {
    int a;
    int b;
    int c;
    // 变量 d 被移除，因为它没有被使用

    // 更好的用户提示和输入方式
    printf("请输入两个整数求最大公因数 (用空格隔开): ");
    
    // 尝试读取两个整数
    if (scanf("%d %d", &a, &b) != 2) {
        printf("输入格式错误。\n");
        return 1; // 返回非零值表示错误
    }

    // 欧几里得算法（辗转相除法）
    while(b != 0) {
        c = a % b;
        a = b;
        b = c;
    }

    // 清晰的输出，末尾添加换行符 \n
    printf("最大公因数是%d\n", a); 
    
    return 0;
}
