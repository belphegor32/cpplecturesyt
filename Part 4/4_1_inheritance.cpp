#include <iostream>

struct Granny {
    friend int main();
protected:
    int x;
    void f() {}

};

struct Mom: private Granny {
    friend struct Son;
    int y;
    void g() {
        std::cout << x;
    }
};

struct Son: Mom {
    int z;
    // void h(Granny& g) {
    //     std::cout << g.x;
    // }
};

int main(){
    Granny g;
    std::cout << g.x;


    return 0;
}