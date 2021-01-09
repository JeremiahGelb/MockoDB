#include "HelloerFactory.hpp"
#include "MockHelloer.hpp"

std::unique_ptr<Helloer> create_helloer() {
    return std::unique_ptr<MockHelloer>(mock_helloer::mock_helloer);
}

namespace mock_helloer {

MockHelloer * mock_helloer;

void init_mock_helloer() {
    mock_helloer = new testing::StrictMock<MockHelloer>();
}

void destroy_mock_helloer() {
    delete(mock_helloer);
}

}  // namespace mock_helloer
