#include <iostream>
#include <string>
#include "basic_operations.h"
using namespace std;


int main() {

char spc = ' ';
char ast = '*';
int user_num;
int num;

  cout << "Write a number: ";
  cin >> user_num;
  num = user_num / 2;

  if (isInRange(user_num) && isOdd(user_num)) {
    for (int i = 0; i <= num; ++i) {
      cout << string(num - i, spc) + string(2 * i + 1, ast) << endl;
    }
    for (int i = num - 1; i >= 0; --i) {
      cout << string(num - i, spc) + string(2 * i + 1, ast) << endl;
    }
  }
  else {
    cout << "The number must be ODD and within the range (1-19). Try again." << endl;
  }
    return 0;
}
















