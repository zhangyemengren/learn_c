#include <iostream>
// 不建议使用宏定义常量
// 首先，因为宏是由预处理器解析的，所以所有出现的宏都将替换为编译之前定义的值。
// 如果您正在调试代码，您将看不到实际值（例如30）——您只会看到符号常量的名称（例如MAX_STUDENTS_PER_CLASS）。
// 而且由于这些 #define 值不是变量，因此您无法在调试器中添加监视来查看它们的值。
// 如果您想知道值MAX_STUDENTS_PER_CLASS解析为什么，则必须找到 的定义MAX_STUDENTS_PER_CLASS（可能位于不同的文件中）。这会使您的程序更难调试。
// keypoint 与带有替换文本的类似对象的宏相比，更喜欢常量变量。
#define MAX_STUDENTS_PER_CLASS 30


// 使函数参数常量需要编译器的帮助，以确保参数的值在函数内部不会更改。但是，当参数按值传递时，我们通常不关心函数是否更改参数的值（因为它只是一个副本，无论如何都会在函数结束时销毁）。
// 使参数常量也会使代码变得混乱。由于这些原因，我们通常不会使参数按值传递const
void printInteger(const int myValue){
    std::cout << myValue << '\n';
}
// const按值返回时不要使用。这是因为返回值是函数的副本，因此对返回值的任何更改都不会影响原始值。因此，const返回值没有任何意义。
// 返回 const 值还会阻碍某些类型的编译器优化（涉及移动语义），从而导致性能降低。
const int getValue(){
    return 5;
}
int main(){
    // 要使变量成为常量，请将const关键字放在变量声明中的变量类型之前或之后
    // 尽管 C++ 可以接受const类型之前或之后，但在类型之前使用更为常见，const因为它更好地遵循标准英语语言约定，其中修饰符位于要修改的对象之前（例如“a green ball”，而不是“a ball”）绿色的”）。
    const double gravity { 9.8 };  // preferred use of const before type
    int const sidesInSquare { 4 }; // "east const" style, okay but not preferred
    // const 变量必须在定义时初始化，然后该值不能通过赋值来更改：
    // const double gravity; // error: const variables must be initialized

    // const 变量可以从其他变量（包括非常量变量）初始化
    std::cout << "Enter your age: ";
    int age{};
    std::cin >> age;

    const int constAge { age };
    std::cout << "You entered: " << constAge << '\n';
    // keypoint 风格指南：与RUST和JavaScript类似：大写加下划线
    const double PI { 3.14159 };
    const int DAYS_IN_WEEK { 7 };
    printInteger(5);
}