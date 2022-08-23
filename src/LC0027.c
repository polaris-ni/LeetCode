//
// Created by n00800664 on 2022/8/1.
//
#include "stdio.h"

int removeElement(int *nums, int numsSize, int val) {
    int cnt = 0;
    // 下一个待填充位置
    int new = 0;
    // 待判断位置
    int origin = 0;
    while (origin < numsSize) {
        // 与目标值相等，不填充
        if (nums[origin] == val) {
            cnt++;
        } else {
            nums[new] = nums[origin];
            new++;
        }
        origin++;
    }
    return cnt;
}

int main() {
    int test[] = {3, 2, 2, 3};
    printf("%d\n", removeElement(test, 4, 3));
}