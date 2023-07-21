//
// Created by 张弛 on 2023/7/21.
//
#include <iostream>

int main() {
    // std::cout 输出
    std::cout << "3";
    std::cout << 5;
    int x {5};
    // std::endl 与 '\n'
    // 使用 std::endl 可能有点低效，因为它实际上执行两项工作：将光标移动到控制台的下一行，并刷新缓冲区。
    // 将文本写入控制台时，我们通常不需要刷新每行末尾的缓冲区。让系统定期刷新自己会更有效（它的设计目的是有效地执行此操作）。
    //因此，通常首选使用“\n”字符。'\n' 字符将光标移动到控制台的下一行，但不请求刷新，
    // 因此它通常会执行得更好。'\n' 字符也往往更容易阅读，因为它更短并且可以嵌入到现有文本中。
    std::cout << x << std::endl;
    std::cout << "hello" << "world\n";

    // std::cin 输入
    std::cout << "Enter two numbers separated by a space: ";
    int input_x {};
    int input_y {};
    std::cin >> input_x >> input_y;
    std::cout << "You entered: " << input_x << " and " << input_y << "\n";

    return 0;
};