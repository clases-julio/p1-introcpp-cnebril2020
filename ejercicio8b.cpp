#include <iostream>
#include <iomanip>
#include "basic_operations.h"
using namespace std;


int main() {
  double e = 1.0;
  double one = 1.0;
  int user_num, i;

  cout << "Write a positive number: ";
  cin >> user_num;

  i = 1;
  while (i <= user_num) {
    e = e + (one / factorial(i));
    cout << "e: " << setprecision(20) << e << endl; 
    i++;
  }
}
