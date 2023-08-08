#include <cstdint>
#include <iostream>
#include <cstddef>

int main() {
    // 整型大小不确定 为了解决这个问题，C++11引入了一组固定宽度的整数类型，它们保证了它们的大小是固定的。
    //std::int8_t	1 byte signed	-128 to 127	Treated like a signed char on many systems. See note below.
    //std::uint8_t	1 byte unsigned	0 to 255	Treated like an unsigned char on many systems. See note below.
    //std::int16_t	2 byte signed	-32,768 to 32,767
    //std::uint16_t	2 byte unsigned	0 to 65,535
    //std::int32_t	4 byte signed	-2,147,483,648 to 2,147,483,647
    //std::uint32_t	4 byte unsigned	0 to 4,294,967,295
    //std::int64_t	8 byte signed	-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
    //std::uint64_t	8 byte unsigned	0 to 18,446,744,073,709,551,615
    std::int16_t i{ 5 };
    std::cout << i << '\n';
    // 其次，如果您使用固定宽度的整数，在某些体系结构上它可能会比更宽的类型慢。例如，如果您需要保证为 32 位的整数，您可能会决定使用std::int32_t，
    // 但您的 CPU 实际上在处理 64 位整数时可能会更快。然而，仅仅因为您的 CPU 可以更快地处理给定类型并不意味着您的程序总体上会更快
    // - 现代程序通常受到内存使用而不是 CPU 的限制，并且较大的内存占用可能比更快的 CPU 更慢您的程序处理加速了它。如果不实际测量，很难知道。
    // 为了帮助解决上述缺点，C++ 还定义了两个保证定义的替代整数集。
    // 快速类型std::int_fast#_t 提供最快的有符号/无符号整数类型，宽度至少为 # 位（其中 # = 8、16、32 或 64）
    // 最小类型std::int_least#_t 提供宽度至少为 # 位的最小有符号/无符号整数类型（其中 # = 8、16、32 或 64）
    std::cout << "least 8:  " << sizeof(std::int_least8_t) * 8 << " bits\n";
    std::cout << "least 16: " << sizeof(std::int_least16_t) * 8 << " bits\n";
    std::cout << "least 32: " << sizeof(std::int_least32_t) * 8 << " bits\n";
    std::cout << '\n';
    std::cout << "fast 8:  " << sizeof(std::int_fast8_t) * 8 << " bits\n";
    std::cout << "fast 16: " << sizeof(std::int_fast16_t) * 8 << " bits\n";
    std::cout << "fast 32: " << sizeof(std::int_fast32_t) * 8 << " bits\n";

    std::uint_fast16_t sometype { 0 };
    --sometype; // intentionally overflow to invoke wraparound behavior

    std::cout << sometype << '\n';
    // 8 位固定宽度整数类型通常被视为字符而不是整数值（这可能因系统而异）。大多数情况下首选 16 位固定整数类型。


    //尽可能避免以下情况：
    //持有数量的无符号类型
    //8 位定宽整数类型
    //快速和最小固定宽度类型
    //任何特定于编译器的固定宽度整数 - 例如，Visual Studio 定义 __int8、__int16 等

    //sizeof 返回的整数单位size_t
    std::cout << sizeof(std::size_t) << '\n';
}