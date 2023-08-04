#include <iostream>

int main(){
   std::cout << 3 + 4 << "\n";

   std::cout << 3 - 4 * 5 << "\n";

   int x {2};
   // 赋值语句 返回左操作数
   std::cout << (x = 5) << "\n";
}