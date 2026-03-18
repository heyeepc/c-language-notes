// 有 1、2、3、4 四个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
#include <stdio.h>

int main() {
    int i, j, k; // 代表百、十、个位
    int count = 0; // 用来统计总个数

    // i 是百位，j 是十位，k 是个位
    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= 4; j++) {
            for (k = 1; k <= 4; k++) {

                // 确保 i、j、k 三个变量两两不相等
                if (i != j && i != k && j != k) {
                    printf("%d%d%d\n", i, j, k);
                    count++;
                }

            }
        }
    }

    printf("\n总共有 %d 个这样的三位数。\n", count);
    return 0;
}
