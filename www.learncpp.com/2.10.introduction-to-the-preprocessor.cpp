#include <iostream>

// 带有替换文本的类似对象的宏
#define MY_NAME "Alex"
// 没有替换文本的类似对象的宏
#define PRINT_JOE
// 类似对象的宏不会影响其他预处理器指令

int main() {
    std::cout << "My name is: " << MY_NAME << '\n';
// 条件编译
#ifdef PRINT_JOE
    std::cout << "Joe\n"; // will be compiled since PRINT_JOE is defined
#endif

#ifdef PRINT_BOB
    std::cout << "Bob\n"; // will be excluded since PRINT_BOB is not defined
#endif
// ifndef 与 ifdef 相反
#ifndef PRINT_BOB
    std::cout << "Not Bob\n";
#endif
// 排除代码块
#if 0
    std::cout << "You Never see this!\n";
#endif
    return 0;
}