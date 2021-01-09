#include <iostream>

#include "HelloerFactory.hpp"
#include "TalkerFactory.hpp"

int main() {
    const auto hello_to = [] (const std::string & to) {
        auto h = create_helloer();
        return h->hello_to(to);
    };

    std::cout << hello_to("Jeremiah Gelb") << std::endl;

    auto t = create_talker("Katie");
    std::cout << t->talk() << std::endl;
}
