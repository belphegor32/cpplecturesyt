#include <iostream>
#include <string>

// struct S {

//     static const int x = 3;
    
//     static void f(){
//         std::cout << "Hi" << std::endl;
//     }
    
// };

struct Singleton {
private:
    Singleton(){}
    static Singleton* ptr;

    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

public:
    static Singleton& getObject(){
        if(ptr == nullptr){
            ptr = new Singleton();
        }
        return *ptr;
    }

};

// contexual conversion


struct Latitude {
    double value;
    explicit Latitude(double value): value(value) {} // explicit запрещает неявно вызывать конструктор

    explicit operator double() const {
        return value;
    }
};

struct Longitude {
    double value;
    explicit Longitude(double value): value(value) {}

    explicit operator double() const {
        return value;
    }
};

class BigInteger{

};

BigInteger operator""_bi(unsigned long long x){
    return BigInteger();
}


Singleton* Singleton::ptr = nullptr;

int main(){

    Singleton& s = Singleton::getObject();

    BigInteger bi = 1_bi;
}