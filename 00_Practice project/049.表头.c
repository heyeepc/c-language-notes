#include <stdio.h>

#define HEADER1 "==============================\n"
#define HEADER2 "ID\tName\tScore\n"
#define HEADER3 "------------------------------\n"

void printheader() {
    printf(HEADER1);
    printf(HEADER2);
    printf(HEADER3);
}

int main() {
    printheader(); // 调用函数
    printf("001\tAlice\t95\n");
    return 0;
}
