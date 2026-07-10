#include <iostream>

// 4.3 Memory layout, constructors and destructors in case of inheritence

// EBO Empty Base Optimization

struct A {
    A(int x) { std::cout << "A" << x << std::endl; }
    ~A() {
        std::cout << "~A" << std::endl;
    }
};

struct Base {
    int x = 5;

    Base(int x): x(x) {
        std::cout << "Base" << std::endl;
    }

    Base(const Base& other): x(other.x) { std::cout << "Copy" << std::endl; }

    ~Base(){
        std::cout << "~Base" << std::endl;
    }
};

struct Derived: Base {
    int y = 0;
    using Base::Base;
    Derived(int y): Base(0), y(y) {}
};

struct Empty {};

int main(){

    Derived d = 1;
    // std::cout << d.x << std::endl;

    Derived d2 = d;
    std::cout << d2.y << std::endl;

    return 0;
}