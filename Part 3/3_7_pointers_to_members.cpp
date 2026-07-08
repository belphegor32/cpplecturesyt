#include <iostream>

// 3.7. Pointers to memebers.

struct S {
    int x;
    double y;

    void f(int z){
        std::cout << x + z;
    }
};


int main(){

    int S::* p = &S::x;
    S s{1, 3.14};
    s.*p = 2;


    S* ps = &s;
    std::cout << ps->*p << std::endl;


    void (S::* pf)(int) = &S::f;
    (s.*pf)(2);
    (ps->*pf)(4);
    return 0;
}