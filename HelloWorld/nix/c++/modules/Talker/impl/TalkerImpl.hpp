#pragma once

#include <string>
#include <memory>
#include "Talker.hpp"
#include "HelloerFactory.hpp"

class TalkerImpl
: public Talker {
 public:
    explicit TalkerImpl(const std::string & name)
    : name_(name)
    , helloer_(create_helloer())
    {}

    std::string talk() const override;

 private:
    std::string name_;
    std::unique_ptr<Helloer> helloer_;
};
