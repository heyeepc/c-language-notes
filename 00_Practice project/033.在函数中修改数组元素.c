#include <stdio.h>

void add_one(int arr[], int n) {
    for (int i = 0; i < n; i++) {

        arr[i] = arr[i] + 1;
        printf("%d ", arr[i]);
    }

}

int main(void) {
    int nums[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    add_one(nums, 10);

    return 0;
}
