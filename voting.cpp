#include <iostream>

int main() {
    int age;
    bool citizen;
    bool registered;
    
    std::cout << "Bem-vindo ao Registro da Cidade!!\n";
    
    std::cout << "Digite sua idade: ";
    std::cin >> age;
    
    if (age <= 18) {
        std::cout << "Lamento. Você ainda não tem idade pra votar.";
        return 0;
    }
    
    std::cout << "Você é da cidade? ";
    std::cin >> citizen;
    
    std::cout << "Você tem registro pra votar? ";
    std::cin >> registered;
    
    if(age >= 18 and citizen == true and registered == true) {
        std::cout << "Você pode votar!";
    } else if (citizen == false or registered == false) {
        std::cout << "Você ainda não está qualificado pra votar. Precisa se registrar.";
    } else {
        std::cout << "Lamento, você não atende aos requisitos.";
    }
    return 0;
}
