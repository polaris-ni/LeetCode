//
// Created by n00800664 on 2022/8/2.
//
int uniquePathsWithObstacles(int **obstacleGrid, int obstacleGridSize, int *obstacleGridColSize) {
    if (obstacleGrid[0][0] == 1) {
        return 0;
    }
    int m = obstacleGridSize, n = obstacleGridColSize[0];
    if (m == 1) {
        for (int i = 0; i < n; ++i) {
            if (obstacleGrid[0][i] == 1) {
                return 0;
            }
        }
        return 1;
    }
    if (n == 1) {
        for (int i = 0; i < m; ++i) {
            if (obstacleGrid[i][0] == 1) {
                return 0;
            }
        }
        return 1;
    }
    int dp[m][n];
    dp[0][0] = 1;
    dp[0][1] = 1;
    dp[1][0] = 1;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (obstacleGrid[i][j] == 1) {
                dp[i][j] = 0;
                continue;
            }
            if (i + j < 2) {
                continue;
            }
            if (j == 0) {
                dp[i][j] = dp[i - 1][j];
            } else if (i == 0) {
                dp[i][j] = dp[i][j - 1];
            } else {
                dp[i][j] = dp[i][j - 1] + dp[i - 1][j];
            }
        }
    }
    return dp[m - 1][n - 1];
}