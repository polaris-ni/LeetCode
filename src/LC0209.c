//
// Created by n00800664 on 2022/8/1.
//
int minSubArrayLen(int target, int *nums, int numsSize) {
    int l = 0, r = 0;
    int min = 0x7fffffff;
    int sum = 0;
    while (r <= numsSize) {
        if (sum < target) {
            if(r < numsSize){
                sum += nums[r++];
            } else {
                break;
            }
        } else {
            min = r - l >= min ? min : r - l;
            sum -= nums[l++];
        }
    }
    return min == 0x7fffffff?0:min;
}