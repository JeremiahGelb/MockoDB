#include "JinjaGeneratedClassFactory.hpp"
#include "MockJinjaGeneratedClass.hpp"

std::unique_ptr<JinjaGeneratedClass> create_jinja_generated_class() {
    return std::unique_ptr<MockJinjaGeneratedClass>(
        mock_jinja_generated_class::mock_jinja_generated_class
    );
}

namespace mock_jinja_generated_class {

MockJinjaGeneratedClass * mock_jinja_generated_class;

void init_mock_jinja_generated_class() {
    mock_jinja_generated_class = new testing::StrictMock<MockJinjaGeneratedClass>();
}

void destroy_mock_jinja_generated_class() {
    delete(mock_jinja_generated_class);
}

}  // namespace mock_jinja_generated_class
