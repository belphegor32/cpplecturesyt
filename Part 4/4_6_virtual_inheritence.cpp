#include <iostream>


class Granny {
public: 
    int g;
};


class Mom: public virtual Granny {
public:
    int m;
};


class Dad: public virtual Granny {
public:
    int d;
};


class Son: public Mom, public Dad {
public:
    int s;
};


int main(){
    Son s;
    s.g;
    Granny& g = s;

    std::cout << sizeof(s) << std::endl; // 40 

    return 0;
}