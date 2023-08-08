#include <iostream>
int abs(int x) {
    if (x < 0) {
        return -x;
    }
    return x;
}
int main() {
    int x{};
    std::cout << "Enter an integer: ";
    std::cin >> x;

    if (x == 0) {
        std::cout << "The value is zero\n";
    } else {
        std::cout << abs(x) << '\n';
    }
}