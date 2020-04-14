#include <stdio.h>

#define IntArrayLenth(t) sizeof(t)/sizeof(int)

int main() {
    int i,j, nums[5] = {0,1,0,3,12};
    int length = IntArrayLenth(nums);
    for (i = 0; i < length; i ++) {
        if (nums[i] == 0) {
            j ++;
        } else {
            if (j > 0) {
                nums[i-j] = nums[i];
                nums[i] = 0;
            }
        }
    }

    for (i = 0; i < length; i ++)
    {
        printf("%d\t", nums[i]);
    }
    return 0;
}

