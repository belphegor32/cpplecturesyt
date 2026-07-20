#include <iostream>

struct Base {
    // int x;
    // virtual void f(); нельзя оставлять без определения

    // virtual void h() = 0;

    // void f() {
    //     std::cout << "f";
    //     h();
    // }

    virtual void func(int x = 1) {
        std::cout << "Base " << x;
    }

    Base() {
        //std::cout << "Base";
        // h();
        //f(); // pure virtual method called run-time error
    }

    virtual ~Base() = default;
};


struct Derived: Base {
    // int x;
    // void g() {
    //     f();
    // }

    // void h() override {
    //     std::cout << "h" << x;
    // }

    void func(int x = 2){
        std::cout << "Derived " << x;
    }

    Derived(){
        //std::cout << "Derived";
    }
};


int main() {
    Derived d;
    Base& b = d;
    b.func();
    return 0;
}