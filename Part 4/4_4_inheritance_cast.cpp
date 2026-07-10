#include <iostream>

// 4.4 Casts in case of inheritance

struct Base {
    int x = 1;
    Base() = default;
    Base(const Base& other): x(other.x) {
        std::cout << "Copy!" << std::endl;
    }
};

struct Derived: Base {
    int y = 2;
};

// Slicing
void f(Base b){
    std::cout << b.x;
};

int main(){
    Derived d;
    f(d);

    return 0;
}