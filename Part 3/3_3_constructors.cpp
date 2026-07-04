#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>

class Complex {
    double re = 0.0;
    double im = 0.0;

public:
    // Members initializer list
    Complex(double re);
    Complex(double re, double im): re(re), im(im) {}
};
Complex::Complex(double re): re(re) {}

class String {
    char* arr = nullptr;
    size_t sz = 0;
    size_t cap = 0;

public:
    String() = default; // default constructor
    String(size_t n, char c): arr(new char[n + 1]), sz(n), cap(n + 1) {
        memset(arr, c, n);
        arr[sz] = '\0';
        std::cout << 1;
    }

    String(std::initializer_list<char> list)
            : arr(new char[list.size()])
            , sz(list.size())
            , cap(sz + 1){
        std::copy(list.begin(), list.end(), arr);
        arr[sz] = '\0';
        std::cout << 2;
    }
};

int main(){

    // String s; // default initialization

    String s = {'a', 'b', 'c', 'd'};
    String s{2, 'a'};

    Complex c(5.0);
    Complex c2 = 6.0;
    Complex c3{7.0};
    Complex c4 = {8.0};

    std::vector<int> v = {1, 2, 3, 4, 5, 6};

    return 0;
}