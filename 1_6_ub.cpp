#include <iostream>
#include <vector>
// 1.6. Compile-time errors, runtime errors and undefined behavior.

/*  лексические ошибки - непонятно какой токен
    синтаксические ошибки - некоторая конструкция, которую нельзя понять как законченную мысль, ломается парсер
    подавляющее большинство - просим что-то, что над данным типами нельзя делать, или обращаемся к чему-то к чему-то
    непонятному или неоднозначному*/
int main(){

    // CE

    // int x;
    // std::cin >> x;
    // std::cout << x + 5;

    // x + ; // синтаксическая
    // 6abdsda; синтаксическая
    // "abc" + 5.0f; // семантическая ошибка 

    // RE
    // segmentation fault (segfault)

    std::vector<int> v(10);
    // v[50'000] = 1;

    // Floating point exception (FPE)
    // float y;
    // std::cin >> y;

    // std::cout << 5 / y;

    // Aborted
    //v.at(10) = 1;
    //v[-1] = 1000;
    

    return 0;
} 