#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>

class String {

    char* arr = nullptr;
    size_t sz = 0;
    size_t cap = 0;

    // делигирующий конструктор
    String(size_t n): arr(new char[n + 1]), sz(n), cap(n + 1){
        arr[sz] = '\0';
    }

public:

    String() = default; // default constructor

    String(size_t n, char c): String(n) {
        memset(arr, c, n);
    }

    String(std::initializer_list<char> list): String(list.size()) {
        std::copy(list.begin(), list.end(), arr);
    }

    // copy constructor
    String(const String& other): String(other.sz) {
        memcpy(arr, other.arr, sz);
        // memmove(arr, other.arr, sz); верно, даже если пересекаются диапазоны
    }

    // String& operator=(const String& other) {
    //     if(&other == this){
    //         return *this;
    //     }
    //     delete[] arr;
    //     sz = other.sz;
    //     cap = other.cap;
    //     arr = new char[other.cap];
    //     memcpy(arr, other.arr, sz + 1);
    //     return *this;
    // }


    // copy and swap
    // String& operator=(const String& other){
    //     String copy = other;
    //     swap(copy);
    //     return *this;
    // }

    // copy and swap
    String& operator=(String other){
        swap(other);
        return *this;
    }

    void swap(String& other){
        std::swap(arr, other.arr);
        std::swap(sz, other.sz);
        std::swap(cap, other.cap);
    }

    String(String&) = default;

    ~String(){
        delete[] arr;
    }
};

int main(){

    String s = {'a', 'b', 'c', 'd'};
    String s2{2, 'a'};

    String s4 = s;

    s = s2;
    return 0;
}