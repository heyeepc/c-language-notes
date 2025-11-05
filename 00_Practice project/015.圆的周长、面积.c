#include <stdio.h>
int main(void) {

    const float PI = 3.14159;
    float r,perimeter,area;
    printf("请输入圆的半径(radius): ");
    scanf("%f", &r);

    perimeter = 2 * r * PI;
    area = PI * r * r;
    printf("Perimeter = %.2f\n", perimeter);
    printf("Area = %.2f\n", area);
    return 0;
}
