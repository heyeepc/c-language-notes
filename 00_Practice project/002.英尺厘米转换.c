#include <stdio.h> // 引入标准输入输出库，用于使用printf和scanf

const float CONVERSION_FACTOR = 2.54;

int main(void) {
    // 声明两个浮点数（float）变量来存储数值
    float inches; // 用于存储用户输入的英寸数
    float centimeters; // 用于存储计算后的厘米数

    // 1. 提示用户输入数据
    printf("请输入要转换的英寸数 (例如: 10.5): ");

    // 2. 从键盘读取用户的输入，并将其存储到 inches 变量中
    // %f 是格式说明符，表示我们要读取一个浮点数 (float)
    // &inches 表示将读取到的数值存到 inches 变量的“地址”里
    scanf("%f", &inches);

    // 3. 执行转换计算
    // 计算公式：厘米数 = 英寸数 * 转换比例
    centimeters = inches * CONVERSION_FACTOR;

    // 4. 输出结果
    // %.2f 表示输出一个浮点数，并保留小数点后两位
    printf("%.2f 英寸 等于 %.2f 厘米。\n", inches, centimeters);

    // 5. 程序成功结束
    return 0;
}
