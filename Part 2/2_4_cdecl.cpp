#include <iostream>

int main(){

    int* a[10]; // массив из 10 указателей на int
    int (*b)[10]; // указатель на массив из 10 int

    void (*pf)(int); // указатель на функцию, которая принимает int, а возвращает void

    void (*pfa[10])(int);

    void (*(*pff[10])(int))(int);

    return 0;
}