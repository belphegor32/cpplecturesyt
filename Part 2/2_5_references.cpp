#include <iostream>

void f(int& y){
    ++y;
}

int& g(int& x){
    return ++x;
}

int main(){

    // int x = 4;
    // int& y = x;
    // f(x);

    // std::cout << y << std::endl;

    // int z = 7;
    // y = z; // x = z;
    // int& t = y;
    // std::cout << t << std::endl;

    // std::cout << sizeof(y) << std::endl;
    int x = 10;
    g(x) = 6;

    std::cout << g(x) << std::endl;

    return 0;
}