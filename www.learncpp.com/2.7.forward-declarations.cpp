#include <iostream>

// 前向声明 forward declaration for add() (using a function prototype)
int add(int x, int y);

int main() {
    std::cout << "3 + 4 + 5 = " << add(3, 4) << '\n';
    return 0;
}

int add(int x, int y) {
    return x + y;
}