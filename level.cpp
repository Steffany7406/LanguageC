#include <iostream>

int main() {
  int level; // Correção aqui: std::int -> int

  std::cout << "Digite seu nível de aprendizado: ";
  std::cin >> level;

  if (level >= 25) {
    std::cout << "Você está no nível Diamond!";
  } else if (level >= 20) {
    std::cout << "Você está no nível Platinum!";
  } else if (level >= 15) {
    std::cout << "Você está no nível Gold!";
  } else if (level >= 10) {
    std::cout << "Você está no nível Silver!";
  } else if (level >= 5) {
    std::cout << "Você está no nível Bronze!";
  } else {
    std::cout << "Por favor, digite apenas números válidos.";
  }

  return 0;
}
