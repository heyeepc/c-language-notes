#include <stdio.h>

// 保持不变，函数定义完美！
// 通过指针 *a 和 *b 访问并修改了内存中 x 和 y 变量的值。
void swap(int *a, int *b) {
    int z = *a; // 1. 将 *a (x的值) 存入临时变量 z
    *a = *b;    // 2. 将 *b (y的值) 赋给 *a (x的新值)
    *b = z;     // 3. 将 z (x的旧值) 赋给 *b (y的新值)
}

int main(void) {
    int x = 10;
    int y = 20;

    printf("交换前: x = %d, y = %d\n", x, y);

    //  修正：使用 & 运算符传递 x 和 y 的地址
    swap(&x, &y); 

    printf("交换后: x = %d, y = %d\n", x, y);
    
    return 0;
}
