#include <stdio.h>

int main(){

    int data[5] = {10, 20, 30, 40, 50};
    int *p;

    // 1. 初始化 p 指向最后一个元素 data[4] (值 50)
    p = data + 4; 
    
    // 2. 循环条件：p 必须大于或等于数组的起始地址 (data)。
    for (; p >= data; ){ 
        // 打印当前指针指向的值
        printf("%d ", *p);

        // 3. 关键：将指针向后移动两个元素的位置
        // p -= 2; 等价于 p = p - 2;
        // p - 2 意味着地址值将减去 2 * sizeof(int)
        p -= 2; 
    }

    // 输出: 50 30 10 

    return 0;
}
