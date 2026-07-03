#include <iostream>
#include <vector>

// II. compound types.
//
// 2.1. Pointers.

void swap(int* x, int* y){
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

int main(){

    // int x = 0, y = 1;

    // std::cout << &x << std::endl << &y << std::endl; // &: T -> T* Address of operator

    // int* p = &x, *pp = &y; // Pointer
    // std::cout << *p << std::endl; // *: T* -> T Dereference

    // std::cout << p + 1 << std::endl; // +: (T*, int) -> T*

    // std::vector<int> v = {1, 2, 3, 4, 5};

    // int* p = &v[0];
    // *p; // 1;

    // p += 2;
    // std::cout << *(++p) << std::endl;

    // int x = 25;
    // p = &x;

    // std::cout << &v[0] - &v[4] << std::endl;

    // int a = 0; 
    // p = &a;
    // std::cout << *&p << ' ' << &*p << ' ';
    // *p = 1;
    // std::cout << p << '\n';
    // int** pp = &p;
    // std::cout << p << '\n';

    // std::cout << sizeof(p) << '\n';

    // std::cout << *pp << '\n';
    // std::cout << *p << ' ' << **pp << '\n';

    int x = 0;
    int y = 10;
    int* p = &x;
    *++p; // UB

    void* vp = &y;
    std::cout << *((int*)vp) << std::endl;

    swap(&x, &y);
    std::cout << x << ' ' << y << std::endl;

    std::cout << (long long)vp << std::endl;
    // NULL - макрос нуля
    // nullptr - ноль в мире указателей (захардкоженный 0 типа указателей)
    // yo oyyyooy Heeeee
    return 0;
}