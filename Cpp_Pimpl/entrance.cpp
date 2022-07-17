#include <iostream>
#include <memory>
#include "i_traffic.h"
using namespace std;
int main() {
  std::unique_ptr<I_Traffic> traffic = std::make_unique<I_Traffic>();
  cout << traffic->GetName() << endl;
  cout << traffic->GetPrice() << endl;
  cout << traffic->GetType() << endl;
  return 0;
}
