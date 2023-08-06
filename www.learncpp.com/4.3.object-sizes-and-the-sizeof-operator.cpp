#include <iostream>

int main() {
    //Category	Type	Minimum Size	Typical Size	Note
    //Boolean	bool	1 byte	1 byte
    //character	char	1 byte	1 byte	always exactly 1 byte
    //          wchar_t	1 byte	2 or 4 bytes
    //          char8_t	1 byte	1 byte
    //          char16_t	2 bytes	2 bytes
    //          char32_t	4 bytes	4 bytes
    //integer	short	2 bytes	2 bytes
    //          int	2 bytes	4 bytes
    //          long	4 bytes	4 or 8 bytes
    //          long long	8 bytes	8 bytes
    //          floating point	float	4 bytes	4 bytes
    //          double	8 bytes	8 bytes
    //          long double	8 bytes	8, 12, or 16 bytes
    //pointer	std::nullptr_t	4 bytes	4 or 8 bytes
    std::cout << "bool:\t\t" << sizeof(bool) << " bytes\n";
    std::cout << "char:\t\t" << sizeof(char) << " bytes\n";
    std::cout << "wchar_t:\t" << sizeof(wchar_t) << " bytes\n";
    std::cout << "char16_t:\t" << sizeof(char16_t) << " bytes\n";
    std::cout << "char32_t:\t" << sizeof(char32_t) << " bytes\n";
    std::cout << "short:\t\t" << sizeof(short) << " bytes\n";
    std::cout << "int:\t\t" << sizeof(int) << " bytes\n";
    std::cout << "long:\t\t" << sizeof(long) << " bytes\n";
    std::cout << "long long:\t" << sizeof(long long) << " bytes\n";
    std::cout << "float:\t\t" << sizeof(float) << " bytes\n";
    std::cout << "double:\t\t" << sizeof(double) << " bytes\n";
    std::cout << "long double:" << sizeof(long double) << " bytes\n";
    // 不能对void类型使用sizeof运算符，因为它没有大小
    // std::cout << "void*:\t\t" << sizeof(void) << " bytes\n";
    int x{};
    std::cout << "x is " << sizeof(x) << " bytes\n";
    // 您可能会认为使用较少内存的类型会比使用较多内存的类型更快。这并非总是如此。
    // CPU 通常经过优化以处理特定大小（例如 32 位）的数据，并且与该大小匹配的类型可以更快地处理。在这样的机器上，32 位int可能比 16 位Short或 8 位char更快。
}