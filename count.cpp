#include <iostream>

int main() {
    int number;   // Declare a variável number
    int number1;  // Declare a variável number1

    std::cout << "Digite o primeiro número pra contagem: "; // Corrigido de std::count para std::cout
    std::cin >> number; // Lê o primeiro número

    std::cout << "Digite o segundo número pra contagem: "; // Corrigido de std::count para std::cout
    std::cin >> number1; // Lê o segundo número

    std::cout << "A soma é: " << (number + number1) << std::endl; // Exibe a soma dos números

    return 0; // Retorna 0 para indicar que o programa terminou corretamente
}
