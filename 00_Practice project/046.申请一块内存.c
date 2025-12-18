#include <stdio.h>
#include <stdlib.h>

int main(){

        int n = 5;
// 1. 申请内存：n * 每个int的大小
        int *ptr = (int *)malloc(n * sizeof(int));

// 2. 检查是否申请成功（如果内存满了，malloc会返回 NULL）
        if (ptr == NULL) {
            printf("内存申请失败！\n");
            return 1;
        }

// 3. 像使用普通数组一样使用它
        for (int i=0; i<n; i++) {
            ptr[i] = i * 10;
        }

// 4. 释放内存（非常重要！）
        free(ptr);
        ptr = NULL; // 养成好习惯：释放后将指针指向空，防止误用

}
