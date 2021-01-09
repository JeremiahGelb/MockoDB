#pragma once

#include <memory>
#include <string>
#include "Talker.hpp"

std::unique_ptr<Talker> create_talker(const std::string & name);
