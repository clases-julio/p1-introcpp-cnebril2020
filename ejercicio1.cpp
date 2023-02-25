#include <iostream>
#include "basic_operations.h"
using namespace std;

int main() {
  int n1;
  int n2;
  
  cout << "Write the first integer: ";
  cin >> n1;

  cout << "Write the second one: ";
  cin >> n2;

  add(n1, n2);
  mul(n1, n2);
  sub(n1, n2);
  divn(n1, n2);
  
  return 0;
}
