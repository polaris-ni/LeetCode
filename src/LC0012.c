#include <malloc.h>

//
// Created by n00800664 on 2022/8/1.
//
char *intToRoman(int num) {
    char* ans = (char*)malloc(sizeof(char)*32);
    int cur = 0;
    while (num >= 1000) {
        ans[cur] = 'M';
        cur++;
        num -= 1000;
    }
    if (num >= 900) {
        ans[cur] = 'C';
        ans[cur + 1] = 'M';
        cur += 2;
        num -= 900;
    }
    else if (num >= 500) {
        ans[cur] = 'D';
        cur++;
        num -= 500;
    }
    else if (num >= 400) {
        ans[cur] = 'C';
        ans[cur + 1] = 'D';
        cur += 2;
        num -= 400;
    }
    while (num >= 100) {
        ans[cur] = 'C';
        cur++;
        num -= 100;
    }
    if (num >= 90) {
        ans[cur] = 'X';
        ans[cur + 1] = 'C';
        cur += 2;
        num -= 90;
    }
    else if (num >= 50) {
        ans[cur] = 'L';
        cur++;
        num -= 50;
    }
    else if (num >= 40) {
        ans[cur] = 'X';
        ans[cur + 1] = 'L';
        cur += 2;
        num -= 40;
    }
    while (num >= 10) {
        ans[cur] = 'X';
        cur++;
        num -= 10;
    }
    if (num >= 9) {
        ans[cur] = 'I';
        ans[cur + 1] = 'X';
        cur += 2;
        num -= 9;
    }
    else if (num >= 5) {
        ans[cur] = 'V';
        cur++;
        num -= 5;
    }
    else if (num >= 4) {
        ans[cur] = 'I';
        ans[cur + 1] = 'V';
        cur += 2;
        num -= 4;
    }
    while (num >= 1) {
        ans[cur] = 'I';
        cur++;
        num--;
    }
    ans[cur] ='\0';
    return ans;
}