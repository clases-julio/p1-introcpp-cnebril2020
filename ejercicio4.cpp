#include <iostream>
#include "basic_operations.h"
using namespace std;

int main() {
  int n1, n2, n3;

  cout << "Introduzca tres enteros distintos: ";
  cin >> n1 >> n2 >> n3;

  add3(n1, n2, n3);             // addition with 3 numbers
  mean3(n1, n2, n3);            // mean with 3 numbers
  mul3(n1, n2, n3);             // multiplication with 3 numbers
  compareSmallest3(n1, n2, n3); // compare smallest of 3 numbers
  compareLargest3(n1, n2, n3);  // compare largest of 3 numbers

}
