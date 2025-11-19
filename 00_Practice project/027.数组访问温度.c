#include <stdio.h>

int main(void) {
    // 修正：使用大括号 {} 在定义时初始化整个数组
    float fahrenheit[7] = {6.1, 16.5, 15.0, 14.8, 15.2, 18.3, 19.9}; // 建议用浮点数
    
    // 或者让编译器自动计算大小：
    // float fahrenheit[] = {6.1, 16.5, 15.0, 14.8, 15.2, 18.3, 19.9};

    // 访问第一个元素（索引 0）
    float a = fahrenheit[0]; 
    
    // 访问最后一个元素（索引 6，因为数组大小是 7）
    float b = fahrenheit[6]; 

    // 注意：%.2f 比 %2f 更好，它明确指定了小数点后保留两位
    printf("第一个温度 %.2f\n", a);
    printf("最后的温度 %.2f\n", b);

    return 0;
}
