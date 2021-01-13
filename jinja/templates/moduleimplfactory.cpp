#include "{{camel_case}}Factory.hpp"
#include "{{camel_case}}Impl.hpp"

std::unique_ptr<{{camel_case}}> create_{{snake_case}}() {
    return std::make_unique<{{camel_case}}Impl>();
}
