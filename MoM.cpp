#include <iostream>

int main() {
  double month1;
  double month2;

  std::cout << "Enter month1: ";
  std::cin >> month1;

  std::cout << "Enter month2: ";
  std::cin >> month2;

  double MoM = (month2 - month1) / month1 * 100;
  std::cout << "\nThe MoM change is " << MoM << "%";
}

//Outra versão

#include <iostream>
#include <iomanip> // Para formatar a saída com precisão

int main() {
  double month1, month2;

  // Solicita ao usuário o valor do mês 1
  std::cout << "Digite o valor para o Mês 1: ";
  std::cin >> month1;

  // Solicita ao usuário o valor do mês 2
  std::cout << "Digite o valor para o Mês 2: ";
  std::cin >> month2;

  // Calcula a variação Mês a Mês (MoM)
  double mom;
  if (month1 == 0) {
    // Evita divisão por zero se o mês 1 for zero
    mom = (month2 == 0) ? 0 : INFINITY; // Se mês 2 também for zero, MoM é 0, caso contrário, infinito.
  } else {
    mom = ((month2 - month1) / month1) * 100.0;
  }

  // Exibe o resultado
  std::cout << std::fixed << std::setprecision(2); // Formata a saída para duas casas decimais
  std::cout << "A variação Mês a Mês (MoM) é: " << mom << "%" << std::endl;

  return 0;
}
