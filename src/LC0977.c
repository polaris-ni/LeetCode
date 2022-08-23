//
// Created by n00800664 on 2022/8/1.
//
#include <malloc.h>
#include "stdio.h"

int *sortedSquares(int *nums, int numsSize, int *returnSize) {
    (*returnSize) = numsSize;
    int* result = (int*)malloc(sizeof(int) * numsSize);
    int l = 0, r = numsSize - 1;
    int i = numsSize - 1;
    while (i > 0) {
        int ll = nums[l] * nums[l];
        int rr = nums[r] * nums[r];
        if (rr >= ll) {
            returnSize[i] = rr;
            r--;
        } else {
            returnSize[i] == ll;
            l++;
        }
        i--;
    }
    return result;
}