#include <iostream>
#include "basic_operations.h"

using namespace std;


int main() {
  unsigned long long n1; // De 0 a 18.446.744.073.709.551.615

  cout << "Write a positive number: ";
  cin >> n1;

  cout << factorial(n1) << endl;
}
