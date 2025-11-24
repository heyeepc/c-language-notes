#include <stdio.h>

void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

}

int main(void) {
    int data[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };


    print_array(data[0], 4);
    print_array(data[1], 4);
    print_array(data[2], 4);


    return 0;
}
