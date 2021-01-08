#include "HelloerFactory.hpp"
#include "HelloerImpl.hpp"

std::unique_ptr<Helloer> create_helloer() {
    return std::make_unique<HelloerImpl>();
}
