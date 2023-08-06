#include <iostream>

int main(){
    // 语法错误
    // invalid operator (<), extraneous semicolon, undeclared variable (x)
    // std::cout < "Hi there!"; << x << '\n';
    int a {10};
    int b {0};
    // 语义错误
    // division by zero
    std::cout << a << " / " << b << " = " << a/b << '\n';
    // Use of uninitialized variable leads to undefined result
    int x;
    std::cout << x << '\n';
    // 在上面的例子中，语法错误很容易被发现。但在大多数重要的程序中，通过观察代码并不容易发现语义错误。这就是调试技术可以派上用场的地方。
}