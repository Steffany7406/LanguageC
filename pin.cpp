#include <iostream>

int main() {
  int pin = 0;

  std::cout << "BANK OF CODÉDEX\n\n";

  std::cout << "Enter your pin: ";
  std::cin >> pin;

  while (pin != 230154) {
    std::cout << "Incorrect PIN. Try Again: ";
    std::cin >> pin;
  }
  std::cout << "PIN acepted! Welcome!";
  
}
