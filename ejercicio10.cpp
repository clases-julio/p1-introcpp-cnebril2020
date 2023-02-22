#include <iostream>
#include <string>

using namespace std;

int x = 7;
int count = 1;
int count2 = 1;
int num = 4;
char spc = ' ';


int main() {
        for (int i = 0; i <= 8; ++i) {
          cout << string(num, spc);
          for (int j = 1; j <= i + 1; ++j) {
            cout << "*" ;}
          if(num > 0){
            num--;}
        cout << endl;}
/*        for (int y = 8; y >= 0; --y) {
          for (x; x >= 0; --x) {
            cout << "*" ;}
            x = 8;
            count++;
            x -= count;
        cout << endl;}*/
    return 0;
}
