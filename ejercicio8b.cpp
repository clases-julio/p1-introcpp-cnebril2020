#include <iostream>
#include "basic_operations.h"
#include <iomanip>
using namespace std;


int main() {
  double e = 1.0;
  int user_num;
  double one = 1.0;


  cout << "Write a positive number: ";
  cin >> user_num;

  for (int i = 1; i <= user_num; ++i) {
    e = e + (one / factorial(i));
    cout << "e: " << std::setprecision(16) << e << endl; 
  }
  
}
