#include <iostream>
#include <string>
using namespace std;

int main() {
  int n1;
  char spc[4] = "   ";

  cout << "Write a five digit number: ";
  cin >> n1;

  int d1 = (n1 % 100000)/10000; //first digit
  int d2 = (n1 % 10000)/1000;
  int d3 = (n1 % 1000)/100;
  int d4 = (n1 % 100)/10;
  int d5 = n1 % 10;
  
  cout << d1 << spc << d2 << spc << d3 << spc << d4 << spc << d5 << endl;
}
