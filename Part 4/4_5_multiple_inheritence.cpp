#include <iostream>

// Diamond inheritence


class Granny {
public:
    int g;    
};


class Mom: public Granny {
public:
    int m;
    void f(double x){
        std::cout << x << std::endl;
    }
};


class Dad: public Granny {
public:
    int d;
    void f(int x){
        std::cout << x << std::endl;
    }
};


// class Son: public Mom, public Dad {
// public:
//     int s;
// };

class Son: public Dad, public Granny {
public:
    int s;
};


void f(Dad& dad) {
    std::cout << dad.d << std::endl;
}




int main(){

    // Son son;
    // son.s = 3;
    // son.d = 5;
    // f(son);
    // son.Mom::f(5.5);
    // son.g = 5;

    Son s;
    // std::cout << s.Granny::g << std::endl;

    return 0;
}
