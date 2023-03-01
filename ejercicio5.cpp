#include <iostream>
using namespace std;

int main() {
  int r;
  float pi = 3.14159; 

  cout << "Enter the circle radius: ";
  cin >> r;

  cout << "Diameter: " << 2 * r << endl;
  cout << "Circumference: " << 2 * r * pi << endl;
  cout << "Area: " << pi * r * r << endl;

  return 0;
}
