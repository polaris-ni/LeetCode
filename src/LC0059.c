#include <malloc.h>
#include "stdio.h"

//
// Created by n00800664 on 2022/8/1.
//
int **generateMatrix(int n, int *returnSize, int **returnColumnSizes) {
    *returnSize = n * n;
    int **result = (int **) malloc(sizeof(int *) * n);
    *returnColumnSizes = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; ++i) {
        result[i] = (int *) malloc(sizeof(int) * n);
        (*returnColumnSizes)[i] = n;
    }
    int r = (n + 1) / 2;
    int cnt = 1;
    for (int i = 0; i < r; ++i) {
        int l = n - i * 2;
        int h = l - 2;
        int x = i, y = i;
        if (l == 1) {
            result[x][y] = cnt;
            return result;
        }
        printf("**%d %d\n", l, h);
        for (int j = 0; j < l; ++j) {
            printf("%d %d %d\n", x, y + j, cnt);
            result[x][y + j] = cnt++;
        }
        y += l - 1;
        x++;
        printf("\n");
        for (int j = 0; j < h; ++j) {
            printf("%d %d %d\n", x + j, y, cnt);
            result[x + j][y] = cnt++;
        }
        x += h;
        printf("\n");
        for (int j = 0; j < l; ++j) {
            printf("%d %d %d\n", x, y - j, cnt);
            result[x][y - j] = cnt++;
        }
        printf("\n");
        x--;
        y -= h + 1;
        for (int j = 0; j < h; ++j) {
            printf("%d %d %d\n", x - j, y, cnt);
            result[x - j][y] = cnt++;
        }
    }
    return result;
}

int main() {
    int resSize = 0;
    int **resColSize;
    int n = 5;
    int **result = generateMatrix(n, &resSize, resColSize);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}