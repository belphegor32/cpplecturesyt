#include <iostream>

enum class E : int8_t {
    White,
    Gray,
    Black
};

int main(){

    E e = E::Gray;

    std::cout << static_cast<int>(e);

    return 0;
}