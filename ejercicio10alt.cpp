#include <iostream>
#include <string>

using namespace std;
char spc = ' ';
char ast = '*';
int user_num;

int main() {
  
  cout << "Write a number: ";
  cin >> user_num;
  
  for (int i = 0; i <= user_num; ++i) {
    cout << string(4 - i, spc) + string(2 * i + 1, ast) << endl;
}
  for (int i = user_num - 1; i >= 0; --i) {
    cout << string(4 - i, spc) + string(2 * i + 1, ast) << endl;
}
    return 0;
}
