#include <stdio.h>

int main(void) {
    int grid[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    for (int i = 0; i < 3; i++) {       // 遍历行
        for (int j = 0; j < 3; j++) {   // 遍历列
            // 访问当前元素 matrix[i][j]
            printf("%d ", grid[i][j]);
        }
        printf("\n"); // 每打印完一行就换行
    }
    return 0;
}
