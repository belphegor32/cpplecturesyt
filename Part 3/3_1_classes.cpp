#include <iostream>

// Classes, structures, encapsulation

struct S {
    int x;
    double d = 3.14;

    // using string = std::string;

    void f(int y);
    
    void ff(int x){
        // (*this).x = x;
        this->x = x;
    }

    // Inner class
    struct AA {
        char c;
    } a;
};

void S::f(int y){
    std::cout << x + y;
    ff(y);
}

int main(){

    // S s{2, 4.5}; // Aggregate initialization
    // // std::cout << s.x << std:: endl; // UB
    // // std::cout << sizeof(s) << std::endl;

    // std::cout << s.x << ' ' << s.d << std::endl;
    // s.f(5);
    // std::cout << std::endl;

    // S* p = &s;
    // p->x = 5;
    // std::cout << s.x << std::endl;

    S s;
    //using AA = S::AA;

    S::AA a;

    // Local class
    struct A {
        int x = 1;
        int y = 2;
    };

    A la;

    return 0;
}