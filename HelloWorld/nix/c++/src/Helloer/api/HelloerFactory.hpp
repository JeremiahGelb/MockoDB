#pragma once

#include <memory>
#include "Helloer.hpp"

std::unique_ptr<Helloer> create_helloer();
