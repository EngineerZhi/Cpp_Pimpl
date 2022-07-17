#pragma once
#include <string>
class Traffic {
 public:
  Traffic();
  ~Traffic();
  int GetType();
  int GetPrice();
  std::string GetName();
  int GetUsed();

 private:
  int type_;
  int price_;
  std::string name_;

};
