#include <iostream>

// struct Base {
//     virtual void f() const {
//         std::cout << 1 << std::endl;
//     }
// };

// struct Derived: Base {
//     // void f() const {
//     //     std::cout << 2 << std::endl;
//     // }
//     void f() const override {
//         std::cout << 3 << std::endl;
//     }
// };


// struct Granny {
//     virtual void f() const {
//         std::cout << 1 << std::endl;
//     }
// };


struct Dad {
    virtual void f() {
        std::cout << 1;
    }
};


struct Mom {
    virtual void f() {
        std::cout << 2 << std::endl;
    }
};


struct Son final: Mom, Dad {
    void f() override {
        std::cout << 3 << std::endl;
    }
};

int main(){
    // Derived d;
    // Base& b = d;
    // b.f();

    // Mom m;
    // Granny g;

    // int x;
    // std::cin >> x;

    // Granny& gg = (x % 2 ? m : g);

    // gg.f();

    Son s;
    Dad& d = s;
    Mom& m = s;
    m.f();
    d.f();
}