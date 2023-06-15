//
// Created by 张弛 on 2023/6/15.
//
#include <stdio.h>

void guessNumber(int guess) {
    // TODO：在这里写代码
    if (guess == 555) {
        printf("猜对了！这个数字是：%d\n", guess);
    } else if (guess < 555) {
        printf("猜错了！这个数字比%d大\n", guess);
    } else {
        printf("猜错了！这个数字比%d小\n", guess);
    }
}

int main() {
    guessNumber(500);
    guessNumber(600);
    guessNumber(555);
}