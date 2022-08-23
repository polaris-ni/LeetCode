//
// Created by n00800664 on 2022/8/2.
//
int minCostClimbingStairs(int *cost, int costSize) {
    if (costSize == 1) {
        return cost[0] > cost[1] ? cost[1] : cost[0];
    }
    int res[costSize + 1];
    res[0] = cost[0];
    res[1] = cost[0] > cost[1] ? cost[1] : cost[0];
    res[2] = (cost[0] + cost[1]) <= cost[0] ? cost[0] + cost[1] : cost[0];
    for (int i = 2; i <= costSize; ++i) {
        int cost1 = res[i - 1] + cost[i - 1];
        int cost2 = res[i - 2] + cost[i - 2];
        res[i] = cost1 > cost2 ? cost2 : cost1;
    }
    return res[costSize];
}