#include <iostream>

int main(){
    int x; // x is uninitialized
    std::cout << x << "\n"; // who knows what this will print?
    return 0;
}