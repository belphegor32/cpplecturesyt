#include <iostream>

using std::string;

string substr(const string& str, size_t from, size_t to){

}

void f(const string&); // 1

void f(string);

void f(string&);

// void g(size_t& y){
//     ++y;
// }

int main(){

    // int x = 5;
    // int y = 6;
    // int* p = &x;

    // const int* pc = p;
    // pc = &y;
    // // *pc = 1; // CE

    // int* const cp = p;
    // cp = &y; // CE
    // *p = 1;

    // const int* p = new const int[10]{};

    // int x = 5;

    // ++x;

    const string& s = "aaaaaaa"; // константные ссылки можно инициализировать rvalue

    // int x = 0;
    // g(x);
    // std::cout << x;

    return 0;
}