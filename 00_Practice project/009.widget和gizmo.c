//一个在线零售商销售两种产品：widget 和 gizmo。每个 widget重75克，每个gizmo重112克。编写一个程序，从用户那里读取widget的数量和 gizmo的数量。然后程序应该计算和显示产品的总重量。

#include <stdio.h>

int main(void) {
    // 声明：数量应该是整数（int），总重量可以更大（long long 或 double）
    int widget_count;
    int gizmo_count;
    // 声明总重量为 long long，以保证能存储较大的整数重量，避免浮点数精度问题。
    long long total_weight; 

    // 产品单重（使用 int 即可）
    const int widget_weight = 75;  // 建议使用 const 关键字表示不变的值
    const int gizmo_weight = 112;

    // --- 读取 widget 数量 ---
    printf("请输入widget的数量 (整数):\n");
    // 使用 %d 读取 int 类型的 widget_count
    if (scanf("%d", &widget_count) != 1) { 
        fprintf(stderr, "输入错误：widget数量必须为整数。\n");
        return 1;
    }
    
    // --- 读取 gizmo 数量 ---
    printf("请输入gizmo的数量 (整数):\n");
    // 使用 %d 读取 int 类型的 gizmo_count
    if (scanf("%d", &gizmo_count) != 1) { 
        fprintf(stderr, "输入错误：gizmo数量必须为整数。\n");
        return 1;
    }

    // --- 计算总重量 ---
    // 计算并赋值给 long long 类型的 total_weight
    total_weight = ((long long)widget_count * widget_weight) + ((long long)gizmo_count * gizmo_weight);

    // --- 显示结果 ---
    // long long 类型使用 %lld 格式符打印
    printf("产品的总重量是 %lld 克。\n", total_weight);
    
    return 0;
}
