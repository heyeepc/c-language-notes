# include <stdio.h>

int find_max(int a, int b) {
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}
int main() {
    int a, b;
    printf("输入数字a和b\n");
    scanf("%d%d", &a, &b);
    printf("最大的是%d\n", find_max(a, b));
    return 0;
}
