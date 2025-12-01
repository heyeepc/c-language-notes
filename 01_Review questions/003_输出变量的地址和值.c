#include <stdio.h>

int main(void) {

    int x = 100;
    int *p;

    p = &x;

    printf("%d\n", x);          // 打印 x 的值
    printf("%d\n", *p);         // 打印 p 指向的值
    printf("%p\n", (void*)p);   // 打印 p 保存的地址
    printf("%p\n", (void*)&x);  // 打印 x 的地址

    return 0;
}
