#include <stdio.h>

int main(void) {
    int matrix[3][4] = {
        {1, 2, 3, 4},   // 第 0 行
        {5, 6, 7, 8},   // 第 1 行
        {9, 10, 11, 12} // 第 2 行
    };
    for (int i = 0; i < 3; i++) {       // 遍历行
        for (int j = 0; j < 4; j++) {   // 遍历列
            // 访问当前元素 matrix[i][j]
            printf("%d ", matrix[i][j]);
        }
        printf("\n"); // 每打印完一行就换行
    }
    return 0;
}
