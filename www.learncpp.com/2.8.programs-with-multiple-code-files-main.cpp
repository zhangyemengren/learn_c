#include <iostream>

// 声明 函数主题在 www.learncpp.com/2.8.programs-with-multiple-code-files-input.cpp
int getInteger();

int main() {
    int x{getInteger()};
    int y{getInteger()};

    std::cout << x << " + " << y << " is " << x + y << '\n';
    return 0;
}