#include <stdio.h>
#include <math.h>

int main(void) {
    // 基础运算的变量使用 int
    int a, b;
    int c, d, e, f; 
    
    // log 和 pow 的结果是浮点数，必须使用 double 类型
    double g_log, h_pow; 
    
    printf("请输入两个整数 a 和 b: ");

    // 检查 scanf 返回值，确保读取成功 (消除 CLion 警告)
    if (scanf("%d %d", &a, &b) != 2) {
        fprintf(stderr, "输入错误，请确保输入了两个整数。\n");
        return 1;
    }
    
    printf("\n--- 运算结果 ---\n");

    // 1. 加法
    c = a + b;
    printf("a + b = %d\n", c);

    // 2. 乘法
    d = a * b;
    printf("a * b = %d\n", d);

    // 3. 除法和求余数必须检查除数 b
    if (b != 0) {
        // 3. 整数除法
        e = a / b;
        printf("a / b (整除) = %d\n", e);

        // 4. 求余数
        f = a % b;
        printf("a %% b (余数) = %d\n", f);
    } else {
        printf(" 警告: 除数 b 为 0，跳过除法和求余数运算。\n");
    }

    // 5. 对数运算 (log10)
    // 确保 a > 0 且使用 double 类型存储
    if (a > 0) {
        g_log = log10((double)a); // 强制转换为 double
        printf("log10(a) = %lf\n", g_log); // 浮点数使用 %lf
    } else {
        printf(" 警告: log10 运算要求 a > 0，跳过。\n");
    }
    
    // 6. 幂运算 (pow)
    h_pow = pow((double)a, (double)b); // 强制转换为 double
    printf("pow(a, b) = %lf\n", h_pow); // 浮点数使用 %lf
    
    return 0;
}
