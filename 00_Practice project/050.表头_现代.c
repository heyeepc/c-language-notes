#include <stdio.h>

// 定义在文件顶部或头文件中
static const char* const HEADER_LINE = "==============================\n";
static const char* const HEADER_COLS = "ID\tName\tScore\n";


void printheader() {
    printf("%s", HEADER_LINE);
    printf("%s", HEADER_COLS);
    printf("%s", HEADER_LINE);
}

int main() {
    printheader();
    return 0;
}
