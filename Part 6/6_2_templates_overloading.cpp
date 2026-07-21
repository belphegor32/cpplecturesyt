#include <iostream>

// template <typename T, typename U = int>
// U f(T x) {
//     std::cout << 1 << std::endl;
//     return 0;
// }


template <typename T>
void f(T x) {
    std::cout << 1 << std::endl;
}

template <typename T>
void f(T& x) {
    std::cout << 2 << std::endl;
}

int main(){
    int x = 0;
    f(1);

    return 0;
}