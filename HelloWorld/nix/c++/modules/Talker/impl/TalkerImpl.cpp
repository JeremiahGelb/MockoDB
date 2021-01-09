#include "TalkerImpl.hpp"

std::string TalkerImpl::talk() const {
    return helloer_->hello() + " My name is " + name_ + ".";
}
