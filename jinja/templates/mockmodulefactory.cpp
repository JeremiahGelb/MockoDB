#include "{{camel_case}}Factory.hpp"
#include "Mock{{camel_case}}.hpp"

std::unique_ptr<{{camel_case}}> create_{{snake_case}}() {
    return std::unique_ptr<Mock{{camel_case}}>(
        mock_{{snake_case}}::mock_{{snake_case}}
    );
}

namespace mock_{{snake_case}} {

Mock{{camel_case}} * mock_{{snake_case}};

void init_mock_{{snake_case}}() {
    mock_{{snake_case}} = new testing::StrictMock<Mock{{camel_case}}>();
}

void destroy_mock_{{snake_case}}() {
    delete(mock_{{snake_case}});
}

}  // namespace mock_{{snake_case}}
