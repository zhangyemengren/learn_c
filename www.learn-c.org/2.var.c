//
// Created by 张弛 on 2023/6/15.
//
#include <stdio.h>

#define FALSE 0

int main() {
    int a = 0, b = 1, c = 2, d = 3, e = 4;
    a = b - c + d * e;
    printf("%d \n", a);
    char cc = 100;
    long ll = 1000000000000000000;
    long long lll = 1000000000000000000;
    unsigned char ucc = 100;
    printf("%d %ld %lld %d %d \n", cc, ll, lll, ucc, FALSE);
    return 0;
}