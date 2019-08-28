#include <iostream>

unsigned long int factorial(int n) {
  if (n == 0) 
    return 1;
    
  return n * factorial(n - 1);
}

int main(int argc, char* argv[]) {
  if (argc <= 1) {
    std::cout << "Please enter a number argument" << std::endl;
    return 1;
  }

  int value = std::stoi(argv[1]);
  std::cout << value << "! = " << factorial(value) << std::endl;

  return 0;
}
