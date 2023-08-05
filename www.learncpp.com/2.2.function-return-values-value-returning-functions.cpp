#include <iostream>

int getValueFromUser() {
    std::cout << "Enter an integer: ";
    int input = {};
    std::cin >> input;
    return input;
}

// 不允许嵌套定义函数
//int return7()
//{
//    return 7;
//
//    int return9()
//    {
//        return 9;
//    }
//}

int main() {

    int x = {getValueFromUser()};
    int y = {getValueFromUser()};

    std::cout << x << " + " << y << " is " << x + y << '\n';
    // Address of function 'getValueFromUser' will always evaluate to 'true'
    std::cout << getValueFromUser << " is " << true << '\n';
}