#include <stdio.h>

int main(void) {
    int data[5] = {1, 2, 3, 4, 5}; // 数组大小是 5
    float sum = 0;

    // 修正：for 循环结构，使用 i 作为索引
    // 从 i=0 开始，直到 i < 5 (即 i=4 结束)
    for (int i = 0; i < 5; i++) {
        // 累加：将数组中当前索引 i 对应的元素 (data[i]) 加到 sum 上
        sum = sum + data[i];
        // 也可以写成：sum += data[i];
    }

    // 循环结束后，计算平均值
    //  关键：进行类型转换，将 sum (float) 除以 5.0 (float)，得到浮点数平均值
    float average = sum / 5.0;

    printf("数组所有元素的总和是: %.0f\n", sum); // 总和是整数，打印 %.0f 更合适
    printf("平均数是: %.2f\n", average);

    return 0;
}
