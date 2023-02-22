#include <iostream>
#include <string>

using namespace std;
char spc = ' ';
char ast = '*';


int main() {
  
  for (int i = 0; i <= 4; ++i) {
    cout << string(4 - i, spc) + string(2 * i + 1, ast) << endl;}

  for (int i = 3; i >= 0; --i) {
    cout << string(4 - i, spc) + string(2 * i + 1, ast) << endl;}

    return 0;
}
