#include <iostream>
#include "basic_operations.h"
#include <iomanip>
using namespace std;

int main() {
  double π = 4.0;
  double user_num;
  int operador = 0;


  cout << "Write the number of terms: ";
  cin >> user_num;

  if (user_num >= 1) {
    cout << "pi (1 term): " << π << endl;
  }
  for (double i = 2.0; i <= user_num; ++i) {
    if (operador == 0) {
      π = π - (4.0 / odd_numbers(i));
      operador = (1 + operador) % 2;
      cout << "pi (" << i << " terms): " << π << setprecision(20) <<  endl;
    }
    else {
      π = π + (4.0 / odd_numbers(i));
      operador = (1 + operador) % 2;
      cout << "pi (" << i << " terms): " << π << setprecision(20) << endl;
    }
  }
}

