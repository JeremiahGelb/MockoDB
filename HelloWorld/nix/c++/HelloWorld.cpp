#include <iostream>

int main() {
    constexpr auto hello = [] {
        return "Hello World!";
    };

    std::cout << hello() << std::endl;
}
