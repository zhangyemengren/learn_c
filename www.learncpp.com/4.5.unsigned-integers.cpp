#include <iostream>

void doSomething(unsigned int x) {
    std::cout << x << '\n';
}
int main() {
    unsigned short x{65535}; // largest 16-bit unsigned value possible
    std::cout << "x was: " << x << '\n';

    x = 65536; // 65536 is out of our range, so we get modulo wrap-around
    std::cout << "x is now: " << x << '\n';

    x = 65537; // 65537 is out of our range, so we get modulo wrap-around
    std::cout << "x is now: " << x << '\n';

    unsigned short y{ 0 }; // smallest 2-byte unsigned value possible
    std::cout << "x was: " << y << '\n';

    y = -1; // -1 is out of our range, so we get modulo wrap-around
    std::cout << "x is now: " << y << '\n';

    y = -2; // -2 is out of our range, so we get modulo wrap-around
    std::cout << "x is now: " << y << '\n';

    unsigned int u{ 2 };
    signed int s{ 3 };
    // 在C++中，如果数学运算（例如算术或比较）具有一个有符号整数和一个无符号整数，则通常会将有符号整数转换为无符号整数。因此结果将是无符号的。
    std::cout << u - s << '\n'; // 2 - 3 = 4294967295

    signed int ss { -1 };
    unsigned int uu { 1 };

    if (ss < uu) // -1 is implicitly converted to 4294967295, and 4294967295 < 1 is false
        std::cout << "-1 is less than 1\n";
    else
        std::cout << "1 is less than -1\n"; // this statement executes
    doSomething(-1); // -1 is implicitly converted to 4294967295
    // 在保存数量（甚至应该是非负的数量）和数学运算时，优先选择有符号数而不是无符号数。避免混合有符号数和无符号数。
    // keypoint rust无符号和有符号不能相加
    return 0;
}