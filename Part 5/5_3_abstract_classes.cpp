#include <iostream>
#include <cmath>
#include <vector>

struct Shape {
    virtual double area() const = 0;

    void f(){
        std::cout << "Shape::f" << std::endl;
    }

    virtual ~Shape() = default;
};

double Shape::area() const {
    return 0.0;
}

struct Square: Shape {
    double a;
    Square(double a): a(a) {}
    double area() const override {
        return a * a;
    }
};


struct Circle: Shape {
    double r;
    Circle(double r): r(r) {}
    double area() const override {
        return M_PI * r * r;
    }
};


int main(){

    Circle c(1.0);
    c.Shape::f();
    std::cout << c.Shape::area() << std::endl;

    std::vector<Shape*> v;
    v.push_back(new Square(3.0));
    v.push_back(new Circle(2.0));



    for(Shape* s : v) {
        std::cout << s->area() << std::endl;
    }


    return 0;
}