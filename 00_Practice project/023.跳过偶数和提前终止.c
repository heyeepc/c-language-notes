#include <stdio.h>

int main(void) {
    int a;
    
    // 修正：从 a=1 开始迭代，更符合题目要求
    for (a = 1; a <= 20; a++) { 
        
        // 1. 提前终止的检查 (break)
        if (a == 13) {
            break; // 立即跳出整个循环
        }
        
        // 2. 跳过偶数的检查 (continue)
        if (a % 2 == 0) { // 检查是否为偶数
            continue; // 发现是偶数，立即跳到 a++
        }
        
        // 3. 只有通过上面两个检查（a < 13 且 a 是奇数）才会执行到这里
        printf("%d\n", a);
    }
    return 0;
}
