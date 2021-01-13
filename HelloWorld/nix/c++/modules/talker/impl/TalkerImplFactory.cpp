#include "TalkerFactory.hpp"
#include "TalkerImpl.hpp"

std::unique_ptr<Talker> create_talker(const std::string & name) {
    return std::make_unique<TalkerImpl>(name);
}
