// 编写一个程序，从用户那里读取一个正整数n，然后显示从1到n的所有整数的和。//

#include <stdio.h>

int main(void) {
    double n, sum; // 建议将 'sun' 改为 'sum'
    
    printf("数字n为：");
    // 注意：计算 1 到 n 的和，通常 n 是一个整数。
    // 如果你确定 n 总是整数（例如 n=10），使用 int 类型会更精确，
    // 如果 n 可能是小数，那么用 double 是对的。
    if (scanf("%lf", &n) != 1) {
        // 增加错误处理，确保输入成功
        printf("输入错误。\n");
        return 1;
    }

    // 求和公式：(n + 1) * n / 2
    sum = ((n + 1) * n) / 2;
    
    // 如果 n 保证是整数，建议在打印时使用 %g 或 %f 
    // 或者如果使用 int，使用 %d
    printf("sum = %lf\n", sum); 
    
    return 0;
}
