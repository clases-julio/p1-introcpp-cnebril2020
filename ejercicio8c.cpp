#include <iostream>
#include "basic_operations.h"
#include <iomanip>
#include <cmath>
using namespace std;


int main() {
  double e = 0.0;
  double user_num;
  double x;
  int i;


  cout << "Write the number of terms: ";
  cin >> user_num;
  cout << "Write what value 'x' should have (e^x): ";
  cin >> x;

  if (x == 0) {
    e = 1;
    cout << "e⁰: " << e << endl;
  }
  else {
    i = 0;
    while (i < user_num) {
      e = e + ((pow(x, i) / factorial(i)));
      cout << "e: " << setprecision(20) << e << endl; 
      i++;
    }
  }
}

