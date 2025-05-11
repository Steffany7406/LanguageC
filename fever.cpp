#include <iostream>

int main() {
  double temperature;

  std::cout << "Digite a temperatura da pessoa: ";
  std::cin >> temperature;

  if (temperature > 35) {
    std::cout << "Precisamos de um antitermico!\n";
  } 
  else {
    std::cout << "A temperatura está boa!\n";
  }
}

*/==igual a
!=não é igual a
>maior que
<menor que
>=maior ou igual a
<=menor ou igual a/*

#include <iostream>

int main() {
  double temp = 98.0;

  if (temp >= 100) {
    std::cout << "You have a fever. 🤒\n";
  }
  else {
    std::cout << "You do not have a fever. 🕺\n";
  }
}
