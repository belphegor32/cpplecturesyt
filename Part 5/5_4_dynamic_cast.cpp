#include <iostream>
#include <typeinfo>

// RTTI runtime type information


struct Base {
    int x = 0;

    virtual void f() {}

    virtual ~Base() = default;
};


struct Derived: Base {
    int y = 0;

    void f() override {}
};


int main() {
    Derived d;
    Base& b = d;
    int x = 0;

    std::cout << typeid(Derived).name() << std::endl;
    std::cout << typeid(x).name() << std::endl;

    Derived* pd = dynamic_cast<Derived*>(&b);
    if (pd) {

    }

    return 0;
}