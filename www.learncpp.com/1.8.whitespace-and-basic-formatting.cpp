#include <iostream>

int main(){
    //  C++ 是一种与空白无关的语言 因此，以下语句都执行完全相同的操作
    std::cout << "Hello world!";

    std::cout               <<            "Hello world!";

    std::cout << 		"Hello world!";

    std::cout
            << "Hello world!";

    return 0;
}