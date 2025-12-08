#include <stdio.h>

int main(){

    int data[5] = {10, 20, 30, 40, 50};
    int *p;

    p = data + 4;

    for (;p >= data;p--){
        printf("%d ", *p);
    }

    return 0;
}
