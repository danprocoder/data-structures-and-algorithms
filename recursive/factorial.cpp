#include <iostream>

int factorial(int n) {
    return n;
}

int main(int argc, char* argv[]) {
    if (argc <= 1) {
        std::cout << "Please enter a number argument";
    }

    int value = (int) *argv[1];
    std::cout << "Factorial of " << value << "is" << factorial(value) << std::endl;

    return 0;
}
