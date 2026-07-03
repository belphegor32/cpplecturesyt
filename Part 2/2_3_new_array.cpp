#include <iostream>
#include <vector>

int main(){

    int* a = new int[100];


    delete[] a;

    std::vector<int> v(10);

    v[-1] = 50;

    return 0;
}