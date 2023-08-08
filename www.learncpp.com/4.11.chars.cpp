#include <iostream>

int main() {
    char ch1{'a'}; // (preferred)
    std::cout << ch1 << '\n'; // cout prints character 'a'

    char ch2{98}; // code point for 'b' (not preferred)
    std::cout << ch2 << '\n'; // cout prints a character ('b')

    std::cout << "Input a keyboard character: "; // assume the user enters "abcd" (without quotes)
    // td::cin 将允许您输入多个字符。但是，变量ch只能保存 1 个字符。因此，只有第一个输入字符被提取到变量ch中。其余的用户输入保留在 std::cin 使用的输入缓冲区中，并且可以通过后续调用 std::cin 来提取。
    char ch{};
    std::cin >> ch; // ch = 'a', "bcd" is left queued.
    std::cout << "You entered: " << ch << '\n';

    // Note: The following cin doesn't ask the user for input, it grabs queued input!
    std::cin >> ch; // ch = 'b', "cd" is left queued.
    std::cout << "You entered: " << ch << '\n';
    // 将独立字符放在单引号中（例如't'or '\n'、 not "t"or "\n"）。这有助于编译器更有效地优化。
    // 双引号之间的文本（例如“Hello, world!”）被视为由多个字符组成的字符串
    // 避免使用多字符文字（例如'56'）。
    // 几乎在所有情况下都应避免使用 wchar_t（与 Windows API 交互时除外）。它的大小是实现定义的，并且不可靠。它基本上已被弃用。
    std::cout << "🤡" << '\n'; // prints a smiley face emoji
    return 0;
}