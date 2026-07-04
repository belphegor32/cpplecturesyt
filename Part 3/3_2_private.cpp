#include <iostream>

// 3.2 Accesss modifiers

class C {
private:
    int x{5};
public:
    void f(int y){
        std::cout << x + y;
    }
    
    friend void g(C, int);
    friend class CC;
};

void g(C c, int y){
    std::cout << c.x + y + 1 << std::endl;
}

int main(){

    C c;
    // //c.x = 5;
    // c.f(3);
    (int&)c = 10;
    std::cout << (int&)c;

    return 0;
}