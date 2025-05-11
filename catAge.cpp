#include <iostream>

int main() {
  int catAge;
  int humanYears;

  std::cout << "Welcome to the Cat Years program! This only works for cats 3+ years old.\n\n";
  
  std::cout << "Enter your cat's age: ";
  std::cin >> catAge;

  humanYears = (catAge - 2) * 4 + 24;

  std::cout << "Your cat is " << humanYears << " years old in human years.\n";
}

//Outra versão

#include <iostream>
#include <string>
#include <sstream> // Para converter número para string

int main() {
  std::cout << "Bem-vindo ao Contador de idade de Gatos!!\n";

  int catAge; // Usamos int para armazenar a idade do gato como um número
  int humanAge;

  std::cout << "Digite a idade do seu gato: ";
  std::cin >> catAge;

  // Aplica a fórmula de conversão (note que esta é uma aproximação e pode variar)
  if (catAge <= 1) {
    humanAge = catAge * 15;
  } else if (catAge == 2) {
    humanAge = 24;
  } else {
    humanAge = 24 + (catAge - 2) * 4;
  }

  // Converte a idade humana para string para poder concatenar
  std::stringstream ss;
  ss << humanAge;
  std::string humanAgeStr = ss.str();

  std::cout << "A idade do seu gato equivale a " << humanAgeStr << " anos humanos.\n";

  return 0;
}
