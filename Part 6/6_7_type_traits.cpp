#include <iostream>
#include <type_traits>

template <typename T, typename U>
struct is_same {
    static constexpr bool value = false;
};


template <typename T>
struct is_same<T, T> {
    static constexpr bool value = true;
};


template <typename T, typename U>
const bool is_same_v = is_same<T, U>::value;

// template <typename T, typename U>
// void f(T x, U y) {
//     if constexpr (is_same<T, U>::value) {
//         x = y;
//     }
// }



template <typename T>
struct remove_reference {
    using type = T;
};


template <typename T>
struct remove_reference<T&> {
    using type = T;
};


template <typename T>
void f() {
    typename remove_reference<T>::type x;
}


template <typename T>
struct remove_const {
    using type = T;
};


template <typename T>
struct remove_reference<const T> {
    using type = T;
};


template <bool B, typename T, typename F>
struct conditional {
    using type = F;
};


template <typename T, typename F>
struct conditional<true, T, F> {
    using type = T;
};


template <bool B, typename T, typename F>
using conditional_t = typename conditional<B, T, F>::type;


int main(){
    // f<int, std::string>(5, "abc");

    return 0;
}