//
// Created by n00800664 on 2022/8/2.
//
int climbStairs(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    if (n == 2) {
        return 2;
    }
    int res[n + 1];
    res[0] = 0;
    res[1] = 1;
    res[2] = 2;
    for (int i = 3; i <= n; ++i) {
        res[i] = res[i - 1] + res[i - 2];
    }
    return res[n];
}