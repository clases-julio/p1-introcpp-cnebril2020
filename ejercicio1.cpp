#include <iostream>


int main() {
  int num1;
  int num2;
  
  std::cout << "Write the first integer: ";
  std::cin >> num1;

  std::cout << "Write the second one: ";
  std::cin >> num2;

  std::cout << "Sum: " << num1 + num2 << std::endl;
  std::cout << "Multiply: " << num1 * num2 << std::endl;
  std::cout << "Diference: " << num1 - num2 << std::endl;
  std::cout << "Division: " << num1 / num2 << std::endl;

  return 0;
}
