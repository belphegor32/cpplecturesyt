#include <iostream>
#include <array>


template <typename T>
struct S {
    template <int N>
    using A = std::array<int, N>;
};


template <>
struct S<double> {
    static const int A = 5;
};


int x = 0;


template <typename T>
void f() {
    typename S<T>::template A<10> x; // declaration or expression (typename)
}


int main() {
    f<int>();
}