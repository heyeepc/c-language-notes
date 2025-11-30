#include <stdio.h>

int main(void) {
    int data[5] = {10, 20, 30, 40, 50};
    
    // 1. 定义指针并指向数组起始（也可以直接在 for 中完成）
    int *p = data; 
    
    // 2. 计算数组的结束地址（这是安全遍历的关键！）
    // end_ptr 指向数组最后一个元素的下一个位置（即数组的结束边界）
    int *end_ptr = data + 5; 

    //  for 循环结构修正：
    // 初始化： p 已经指向起始位置
    // 条件： 只要 p 还没有到达结束边界 end_ptr
    // 增量： 每次循环后 p++ 移动到下一个元素
    for (p = data; p < end_ptr; p++) {
        
        // 打印：使用解引用 *p 访问当前指向的值
        printf("%d ", *p);
    }
    // 循环结束后，p 正好指向数组边界之外

    return 0;
}
