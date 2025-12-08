#include <stdio.h>

int main(){

    int data[5] = {10, 20, 30, 40, 50};
    int *p = data;
    int *a = data + 2;
    int *b = data + 4;

    printf("第 3 个元素%d\n",*a);
    printf("第 5 个元素%d\n",*b);

    return 0;
}
