#include <stdio.h>

int main(void) {
    int a;
    
    printf("输入一个整数成绩 (0-100): ");
    if (scanf("%d", &a) != 1) {
        printf("输入无效。\n");
        return 1;
    }

    // 检查分数是否在有效范围内
    if (a < 0 || a > 100) {
        printf("输入成绩无效，请确保成绩在 0 到 100 之间。\n");
    } 
    // 使用 else if 确保互斥，且逻辑更清晰
    else if (a >= 90 && a <= 100) { 
        printf("考试等级: 优秀 (A)\n");
    } 
    else if (a >= 80) { // 此时 a 必然小于 90 (被上一个 else if 排除)
        printf("考试等级: 良好 (B)\n");
    } 
    else if (a >= 60) { // 此时 a 必然小于 80
        printf("考试等级: 及格 (C)\n");
    } 
    else { // 剩下的所有情况，即 a < 60
        printf("考试等级: 不及格 (D)\n");
    }

    return 0;
}
