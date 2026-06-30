#include <iostream>

void f(int**){

}

void f(int(*)[5]){

}

void f(int* [5]){
    
}

int main(){

    int a[5][5];

    int* b[5]; // array of 5 int pointers
    int (*c)[5]; // pointer to array of 5 ints


    return 0;
}