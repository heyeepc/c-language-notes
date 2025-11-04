#include <stdio.h>
#include <locale.h> // 需要包含这个头文件
int main(void) {
    setlocale(LC_ALL, "");

    char upper_char, diff_value, lower_char;

    // 💡 建议：变量名使用英文全称，可读性更好

    printf("输入一个大写字母：");
    // 注意：scanf("%c", &a); 读取字符时，可能会读到回车符。
    // 为了更安全地读取下一个字符，可以在 %c 前加一个空格：%c
    if (scanf(" %c", &upper_char) != 1) { // 增加空格和错误检查
        return 1;
    }

    // 1. 计算大小写字母之间的固定差值 (32)
    diff_value = 'a' - 'A';

    // 2. 将用户输入的大写字母 (a) 加上这个差值 (b)
    // 关键修正：c = upper_char + diff_value;
    lower_char = upper_char + diff_value;

    printf("转换后的小写字母是: %c\n", lower_char);

    return 0;
}
