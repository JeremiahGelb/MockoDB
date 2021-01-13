#include "JinjaGeneratedClassFactory.hpp"
#include "JinjaGeneratedClassImpl.hpp"

std::unique_ptr<JinjaGeneratedClass> create_jinja_generated_class() {
    return std::make_unique<JinjaGeneratedClassImpl>();
}
