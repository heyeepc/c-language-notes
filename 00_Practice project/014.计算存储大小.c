#include <stdio.h>
int main(void) {
    int a;
    char b;
    float c;
    double d;

    printf("int 占用的字节数: %zu\n", sizeof(int));
    printf("char 占用的字节数: %zu\n", sizeof(char));
    printf("float 占用的字节数: %zu\n", sizeof(float));
    printf("double 占用的字节数: %zu\n", sizeof(double));

    return 0;
}
