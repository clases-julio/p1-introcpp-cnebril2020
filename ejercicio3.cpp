#include <iostream>


int main() {
  int num1;
  int num2;
  
  std::cout << "Write the first integer: ";
  std::cin >> num1;

  std::cout << "Write the second one: ";
  std::cin >> num2;

if (num1 > num2)
  std::cout << "The larger number is: " << num1 << std::endl;
else if (num2 > num1)
  std::cout << "The larger number is: " << num2 << std::endl;
else
  std::cout << "The numbers are the same" << std::endl;

  return 0;
}
