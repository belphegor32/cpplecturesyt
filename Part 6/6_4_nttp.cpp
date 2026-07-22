#include <iostream>
#include <array>
#include <vector>

// Non-type template parameters

template <typename T, size_t N>
class array {
    T arr[N];
};


template <size_t M, size_t N, typename Field = double>
class Matrix {};


template <size_t N, typename Field = double>
using SquareMatrix = Matrix<N, N, Field>;


template <size_t M, size_t K, size_t N, typename Field>
Matrix<M, N, Field> operator*(const Matrix<M, K, Field>& a, const Matrix<K, N, Field>& b);


// Template template parameters

template <typename T, template <typename> typename Container = std::vector>
class Stack {
    Container<T> container;
};


template <typename T>
using myvector = std::vector<T>;

int main() {
    std::array<int, 100> a;

    Matrix<5, 5> m;
    SquareMatrix<5> sm;

    //Stack<int, std::vector> s;
    Stack<int, myvector> s;
}