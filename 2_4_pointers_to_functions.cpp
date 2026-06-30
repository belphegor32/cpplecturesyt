#include <iostream>
#include <algorithm>

bool cmp(int x, int y){
    return x > y;
}

void f(int){};

void f(double){};

int main(){

    // int a[5] = {5, 3, 2, 8, 9};

    // bool (*p)(int, int) = cmp;
    // std::cout << (void*)p;

    // std::sort(a, a + 5, p);

    // for(int i = 0; i < 5; ++i){
    //     std::cout << a[i] << ' ';
    // }

    void (*p)(int) = &f;
    void (*p2)(double) = &f;

    std::cout << (void*)p << ' ' << (void*)p2 << std::endl;
    return 0;
}