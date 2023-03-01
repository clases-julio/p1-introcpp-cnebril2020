#include <iostream>
#include <string>
using namespace std;

void add (int x, int y) {
  cout << "La suma es " << x + y << endl;
}

void sub (int x, int y) {
  cout << "La resta es " << x - y << endl;
}

void mul (int x, int y) {
  cout << "El producto es " << x * y << endl;
}

void divn (int x, int y) {
  cout << "La división es " << x / y << endl;
}

void add3 (int x, int y, int z) {
  cout << "La suma es " << x + y + z << endl;
}

void mul3 (int x, int y, int z) {
  cout << "El producto es " << x * y * z << endl;
}

void mean3 (int x, int y, int z) {
  int total = x + y + z;
  int nums = 3;

  cout << "El promedio es: " << total / nums << endl;
}

void compare (int x, int y) {
  if (x > y)
    cout << x << " es mas grande." << endl;
  else if (y > x)
    cout << y << " es mas grande." << endl;
  else
    cout << "Estos numeros son iguales." << endl;
}

void compareLargest3 (int x, int y, int z) {
  if (x > y && x > z) 
    cout << "El mayor es " << x << endl;
  else if (y > x && y > z)
    cout << "El mayor es " << y << endl;
  else
    cout << "El mayor es " << z << endl;
}

void compareSmallest3 (int x, int y, int z) {
  if (x < y && x < z) 
    cout << "El menor es " << x << endl;
  else if (y < x && y < z)
    cout << "El menor es " << y << endl;
  else
    cout << "El menor es " << z << endl;
}

unsigned long long factorial(unsigned long long n1) {
  int i = n1 - 1;

  if (n1 == 0) {
    return n1 = 1;
  } 
  else {
    while (i > 1) 
    {
      n1 = n1 * i;
      i--;
    }
    return n1;
  }
}

double odd_numbers(double n1)
{
  double i = 1.0;
  for (i; i <= n1*2; i += 2)
  {
    i;
  }
  return (i - 2);
}

bool isInRange(int a)  {
  if (a >= 1 && a <= 19) {
    return true;
  }
  else {
    return false;
  }
}
    
bool isOdd(int a) {
  if (a % 2 == 1) {
    return true;
  }
  else {
    return false;
  }
}






















