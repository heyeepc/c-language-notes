#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4};
    int i, j, k;
    int count = 0;

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            for(k = 0; k < 4; k++){
                if(i != j && i != k && j != k){
                    printf("%d%d%d\n", a[i], a[j], a[k]);
                    count++;
                }
            }
        }
    }

    printf("总数：%d\n", count);
    return 0;
}
