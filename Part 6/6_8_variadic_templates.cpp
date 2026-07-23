#include <iostream>


// variadic templates

void print() {}

template <typename Head, typename... Tail>
void print(Head head, Tail... tail) {
    std::cout << head << ' ';
    std::cout << sizeof...(tail) << '\n';
    print(tail...);
}


template <typename First, typename Second, typename... Types>
struct is_homogeneous {
    static constexpr bool value = std::is_same_v<First, Second> && is_homogeneous<Second, Types...>::value;
};


template <typename First, typename Second>
struct is_homogeneous<First, Second> {
    static constexpr bool value = std::is_same_v<First, Second>;
};

int main(){
    print(1, 0, "abc");
}