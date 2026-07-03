#include <iostream>


void f(int* a){
    std::cout << "Hi! " << a[2];
}

// void f(int a[]){
//     std::cout << "Hi! " << a[2];
// }

int main(){

    // int a[5]{};
    // a[1] = 1;

    // for(int i = 0; i < 6; i++){
    //     std::cout << a[i];
    // }

    // static int a[10'000'000];

    // int a[5] = {1, 2, 3, 4, 5};

    // std::cout << *(a + 3) << std::endl; // array to pointer conversion

    // a[2] == *(a + 2)

    // int* p = a + 3;
    // std::cout << p[-1] << std::endl; // equivalent to *(p - 1)

    // std::cout << 2[a] << std::endl; // equivalent to *(2 + a);

    int a[5] = {1, 2, 3, 4, 5};
    int b[5]{};
    int* p = a;

    // a = b; // error
    // ++a; // error
    // a += 1; // error

    std::cout << sizeof(p) << ' ' << sizeof(a) << std::endl;
    f(a);

    return 0;
}