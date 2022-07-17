#include "traffic.h"

Traffic::Traffic() {
  type_=1;
  price_=1000;
  name_ = "xiaomi car";
}

Traffic::~Traffic() {}

int Traffic::GetType() { return type_; }

int Traffic::GetPrice() { return price_; }

std::string Traffic::GetName() { return name_; }

int Traffic::GetUsed() { return 0; }
