#include <iostream>
#include <iomanip>

int main() {
    //float	4 bytes	4 bytes
    //double	8 bytes	8 bytes
    //long double	8 bytes	8, 12, or 16 bytes

    int x{5}; // 5 means integer
    double y{5.0}; // 5.0 is a floating point literal (no suffix means double type by default)
    float z{5.0f}; // 5.0 is a floating point literal, f suffix means float type

    std::cout << 5.0 << '\n';
    std::cout << 6.7f << '\n';
    std::cout << 9876543.21 << '\n';
    // 设置精度
    std::cout << std::setprecision(17);

    double d1{ 1.0 };
    std::cout << d1 << '\n';

    double d2{ 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 }; // should equal 1.0
    std::cout << d2 << '\n';

    double zero {0.0};
    double posinf { 5.0 / zero }; // positive infinity
    std::cout << posinf << '\n';

    double neginf { -5.0 / zero }; // negative infinity
    std::cout << neginf << '\n';

    double nan { zero / zero }; // not a number (mathematically invalid)
    std::cout << nan << '\n';

    // 总而言之，关于浮点数，您应该记住两件事：
    //浮点数对于存储非常大或非常小的数字非常有用，包括那些带有小数部分的数字。
    //浮点数通常具有较小的舍入误差，即使该数字的有效位数少于精度。很多时候，这些数据会被忽视，因为它们太小，而且数字在输出时被截断。然而，浮点数的比较可能不会给出预期的结果。对这些值执行数学运算将导致舍入误差变大。
}