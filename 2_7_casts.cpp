#include <iostream>



void f(const int& c){

    

    return;
}

int main(){


    // static_cast
    // int x = 5;
    // double y = static_cast<double>(x);

    // std::cout << y << std::endl;


    // reinterpret_cast
    // long long x = 0x3FF0000000000000LL;

    // double* p = reinterpret_cast<double*>(&x);

    // std::cout << *p << std::endl;

    long long y = 1729;
    std::cout << reinterpret_cast<double&>(y) << std::endl; // UB
    double& d = reinterpret_cast<double&>(y);
    d = 3.14;
    // std::cout << d << ' ' << y << std::endl;


    int x = 0;

    int *p = &x;
    std::string* str = reinterpret_cast<std::string*>(p); // UB
    std::cout << *str;


    // const_cast
    const int c = 5;
    int& cc = const_cast<int&>(c);
    cc = 4; // UB
    std::cout << c << ' ' << cc << std::endl;

    // c style cast
    //int x = 5;
    //double d = (double)x;

    return 0;
}