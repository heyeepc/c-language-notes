#include <stdio.h>

int main() {
    int data[5] = {10, 20, 80, 40, 50};
    int *p;
    int max = *data;
    p = data + 1;

    for (p; p < data + 5; p++) {

        if (*p > max) {
            max = *p;
        }
    }

    printf("最大值 = %d\n", max);
    return 0;
}
