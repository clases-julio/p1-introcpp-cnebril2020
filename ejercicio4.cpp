#include <iostream>
#include "basic_operations.h"
using namespace std;

int main() {
  int n1, n2, n3;

  cout << "Introduzca tres enteros distintos: ";
  cin >> n1 >> n2 >> n3;

  add3(n1, n2, n3);
  mean3(n1, n2, n3);
  mul3(n1, n2, n3);
  compareSmallest3(n1, n2, n3);
  compareLargest3(n1, n2, n3);

}
