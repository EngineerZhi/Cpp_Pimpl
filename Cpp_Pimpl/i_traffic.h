#pragma once
#include <iostream>
#include <memory>
class Traffic;
class I_Traffic {
 public:
  I_Traffic();
  ~I_Traffic();
  int GetType();
  int GetPrice();
  std::string GetName();
 private:
  std::unique_ptr<Traffic> traffic_pimpl_;

};
