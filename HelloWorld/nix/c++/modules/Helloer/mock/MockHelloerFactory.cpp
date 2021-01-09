#include "HelloerFactory.hpp"
#include "MockHelloer.hpp"

std::unique_ptr<Helloer> create_helloer() {
    return std::make_unique<MockHelloer>();
}
