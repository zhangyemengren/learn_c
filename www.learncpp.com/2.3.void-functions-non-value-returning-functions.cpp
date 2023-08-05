
#include <iostream>

void printHello(){
    std::cout << "Hello" << "\n";

    // 不要将 return 语句放在非值返回函数的末尾。
    // return;
}
int main(){
    printHello();
    // 不能将无返回值的函数赋值
    // std::cout << printHello();
    return 0;
}