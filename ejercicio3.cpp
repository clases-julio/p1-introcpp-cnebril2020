#include <iostream>
#include "basic_operations.h"
using namespace std;

int main() {
  int num1;
  int num2;
  
  cout << "Write the first integer: ";
  cin >> num1;

  cout << "Write the second one: ";
  cin >> num2;

  compare(num1, num2); // void function

  return 0;
}
