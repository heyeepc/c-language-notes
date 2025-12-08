#include <stdio.h>

int main() {
    int data[5] = {10, 20, 80, 40, 50};
    int *p;
    int min = *data;
    p = data + 1;
    for (p; p <= data + 4; p++) {
        //  比较与更新
        // *p 是当前指针指向的数组元素的值
        if (*p < min) {
            min = *p; // 如果找到更小的值，则更新 min
        }
    }


    printf("最小值 = %d\n", min);
    return 0;
}
