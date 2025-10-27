//编写一个程序，要求用户输入房间的宽度和长度。一旦读取这些值，程序就应该计算和显示房间的面积。长度和宽度将作为浮点数输入。在提示和输出消息中包含单位：英尺或米，这取决于你使用哪个单位更舒服。//

#include <stdio.h>

int main() {
    double length, width, area;

    // 提示用户输入
    printf("请输入房间的长度（米）：");
    scanf("%lf", &length);

    printf("请输入房间的宽度（米）：");
    scanf("%lf", &width);

    // 计算面积
    area = length * width;

    // 输出结果
    printf("房间的面积是 %.2lf 平方米。\n", area);

    return 0;
}
