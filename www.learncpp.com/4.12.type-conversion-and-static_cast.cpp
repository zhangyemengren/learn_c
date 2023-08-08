#include <iostream>

void print(int x) // print now takes an int parameter
{
    std::cout << x << '\n';
}

int main() {
    // 隐式转换
    print(5.5); // warning: we're passing in a double value
    // 显式转换
    print(static_cast<int>(5.5)); // explicit conversion to int
    char c{};
    std::cout << "Enter a character: ";
    std::cin >> c;
    int i{c};
    std::cout << c << " has ASCII code 显示" << static_cast<int>(c) << " 隐式"<< i << '\n';
    return 0;
}