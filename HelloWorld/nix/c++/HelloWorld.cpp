#include <iostream>

#include "Helloer.hpp"

int main() {
    const auto hello = [] {
        const Helloer h;
        return h.hello();
    };

    std::cout << hello() << std::endl;
}
