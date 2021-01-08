#include <iostream>

#include "HelloerFactory.hpp"

int main() {
    const auto hello_to = [] (const std::string & to) {
        auto h = create_helloer();
        return h->hello_to(to);
    };

    std::cout << hello_to("Jeremiah Gelb") << std::endl;
}
