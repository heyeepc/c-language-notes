#include <stdio.h>
#include <stdlib.h> // 必须包含，为了使用 malloc 和 free

int main() {
    int count;
    int sum = 0; // 用来存储总和

    printf("你想存储多少个数字？ ");
    scanf("%d", &count);

    // 1. 申请内存
    int *arr = (int *)malloc(count * sizeof(int));

    // 2. 检查内存是否申请成功（安全检查）
    if (arr == NULL) {
        printf("内存不足，申请失败！\n");
        return 1; 
    }

    // 3. 第一个循环：输入数字
    // arr 现在用起来就和 int arr[count] 没区别
    for (int i = 0; i < count; i++) {
        printf("请输入第 %d 个数字: ", i + 1);
        scanf("%d", &arr[i]); // 存入第 i 个“保险柜”
    }

    // 4. 第二个循环：计算总和
    for (int i = 0; i < count; i++) {
        sum += arr[i]; 
    }

    printf("\n所有数字的总和是: %d\n", sum);

    // 5. 释放内存（非常重要：还掉钥匙，退租保险柜）
    free(arr);
    arr = NULL; // 防止变成野指针

    return 0;
}
