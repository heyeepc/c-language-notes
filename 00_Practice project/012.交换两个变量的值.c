#include <stdio.h>

int main(void) {

    int a = 5, b = 10;
    
    printf("交换前: a=%d, b=%d\n", a, b);

    // --- 不使用第三个变量进行交换的逻辑 ---
    a = a + b; // a 变为 a+b (15)
    b = a - b; // b 变为 (a+b) - b = a (5)
    a = a - b; // a 变为 (a+b) - a = b (10)
    // ------------------------------------

    printf("交换后: a=%d, b=%d\n", a, b);

    return 0;
}
