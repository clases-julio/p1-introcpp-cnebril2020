#include <iostream>
#include "basic_operations.h"
#include <iomanip>
#include <cmath>
using namespace std;


int main() {
  double e = 0.0;
  double user_num;
  double x;


  cout << "Write the number of terms: ";
  cin >> user_num;
  cout << "Write what value 'x' should have (e^x): ";
  cin >> x;
  if (x == 0) {
  e = 1;
  cout << "e⁰: " << e << endl;
  }
  else {
    for (int i = 0; i < user_num; ++i) {
      e = e + ((pow(x, i) / factorial(i)));
      cout << "e: " << setprecision(16) << e << endl; 
  }
  }
  
}
