#include <iostream>

// struct Base {
//     int x = 1;

//     void f(double){
//         std::cout << 1;
//     }
// };

// struct Derived: Base {
//     int x = 2;
// private:
//     using Base::f;
// public:
//     void f(int){
//         std::cout << 2;
//     }
// };

struct Granny {
    int x;
    void f() {}

};

struct Mom: private Granny {
    friend int main();
    int x;
};

struct Son: Mom {
    int x;

    // CE
    // void f(Granny& g){
    //     std::cout << g.x;
    // }

    // ok
    void f(::Granny& g){
        std::cout << g.x;
    }
};


int main(){
    
    // Derived d;
    // d.f(0.0);
    // d.Base::f(0.0);
    // std::cout << d.x;

    Son s;

    // s.Mom::Granny::x;
    s.Granny::x;

    return 0;
}