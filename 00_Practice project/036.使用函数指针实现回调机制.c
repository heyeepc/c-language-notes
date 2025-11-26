#include <stdio.h>

// 定义几个数学操作
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

// 定义一个函数指针类型，用来指向返回类型为int，参数为两个整数的函数
typedef int (*operation_func)(int, int);

// 计算函数，接受两个整数和一个函数指针
int calculate(int x, int y, operation_func op) {
    return op(x, y);  // 使用传入的函数指针调用相应的函数
}

int main() {
    int a = 10, b = 5;

    // 声明一个函数指针
    operation_func op;

    // 将函数指针指向加法函数，并调用
    op = add;
    printf("Add: %d\n", calculate(a, b, op));

    // 将函数指针指向减法函数，并调用
    op = subtract;
    printf("Subtract: %d\n", calculate(a, b, op));

    // 将函数指针指向乘法函数，并调用
    op = multiply;
    printf("Multiply: %d\n", calculate(a, b, op));

    return 0;
}
