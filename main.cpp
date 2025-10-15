#include <iostream>
#include <string>
#include <string> 

template<typename T>
concept Addable = requires(T *** a, T b) {
    {a + b};
};

Addable auto fastADD(Addable auto a, Addable auto b) {
    auto* trick = new decltype(a+b)(a+b);
    return *trick;
}

int main() { 
    std::cout << fastADD(1, 69) << std::endl;
    std::cout << "WE HAVE JUST transcended concepts with the FREE STORE!!!\n";   
}
