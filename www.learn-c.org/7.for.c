//
// Created by 张弛 on 2023/6/15.
//
#include <stdio.h>

int main() {
    int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int factorial = 1;
    int i;

    /* 在这里使用for循环计算阶乘*/
    for(i = 0; i < 10; i++) {
        factorial *= array[i];
    }
    printf("10! is %d.\n", factorial);
}