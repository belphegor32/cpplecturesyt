#include <iostream>

// Template specialization


template <typename T>
class vector {
    T* arr;
    size_t sz;
    size_t cap;
};


template <>
class vector<bool> {
    char* arr;
    size_t sz;
    size_t cap;
};


template <typename T, typename U>
struct S {};


// Partial specialization
template <typename W>
struct S<int, W> {};

int main(){


    return 0;
}