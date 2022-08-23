//
// Created by n00800664 on 2022/8/17.
//
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdio.h>
#include <malloc.h>

int *finalPrices(const int *prices, int pricesSize, int *returnSize) {
    int *result = NULL;
    result = (int *) malloc(sizeof(int) * pricesSize);
    (*returnSize) = pricesSize;
    for (int i = 0; i < pricesSize; ++i) {
        result[i] = prices[i];
        for (int j = i + 1; j < pricesSize; ++j) {
            if(prices[j] <= prices[i]){
                result[i] = prices[i] - prices[j];
                break;
            }
        }
    }
    return result;
}