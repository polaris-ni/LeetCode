//
// Created by n00800664 on 2022/8/1.
//
#include <stdio.h>

int searchInsert(const int *nums, int numsSize, int target);

int main() {
    int test[] = {-1, 0, 3, 5, 9, 12};
    printf("%d", searchInsert(test, 6, 13));
    int max = 0x7fffffff;
    printf("%d", max);
}

int searchInsert(const int *nums, int numsSize, int target) {
    int l = 0;
    int r = numsSize - 1;
    int mid;
    while (l <= r) {
        mid = (l + r) / 2;
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return l;
}