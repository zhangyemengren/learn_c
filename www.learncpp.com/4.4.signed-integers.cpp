#include <iostream>

int main(){
    // signed没有必要 因为默认整数就是有符号的
    signed short ss;
    signed int si;
    signed long sl;
    signed long long sll;
    // 推荐写法
    short sss;
    int sis;
    long sls;
    long long slls;
    // 有符号整数溢出将导致未定义的行为。
    std::cout << 20 / 4 << '\n';
    std::cout << 8 / 5 << '\n'; // 未整除
}