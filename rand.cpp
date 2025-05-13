#include <iostream>
#include <cstdio>
#include <cstdlib>

int main() {
  std::cout << std::rand() << "\n"; // para achar um conjunto de números aleatorios
  std::cout << std::rand() << "\n";
  std::cout << std::rand() << "\n";
  
  int answer = std::rand() % 10;
  std::cout << answer;
}

// outra versão

#include <iostream>
#include <cstdio>
#include <cstdlib>

int main() { // programa pra rolar um dado
  srand(time(NULL));

  int dice = std::rand() % 6;
  std::cout << dice;
}

//

#include <iostream>
#include <cstdlib>

int main() {
  srand(time(NULL));

  int fortune = std::rand() % 6;  // Generates a random number that's either 0 or 1

  if (fortune == 0) { 
    std::cout << "🥠 Don't pursue happiness – create it.\n";
  }
  else if (fortune == 1) { 
    std::cout << "🥠 All things are difficult before they are easy.\n";
  }
  else if (fortune == 2) {
    std::cout << "🥠 The early bird gets the worm, but the second mouse gets the cheese.\n";
  }
  else if (fortune == 3) {
    std::cout << "🥠 Someone in your life needs a letter from you.\n";
  }
  else if (fortune == 4) {
    std::cout << "🥠 The fortune you search for is in another cookie.\n";
  }
  else {
    std::cout << "🥠 Help! I'm being held prisoner in a Chinese bakery!\n";
  }
}

//

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>

int main() {
  // Inicializa o gerador de números aleatórios
  std::srand(std::time(0));

  // Lista de fortunas
  std::vector<std::string> fortunes = {
    "Não persiga a felicidade – crie-a.",
    "Todas as coisas são difíceis antes de serem fáceis.",
    "O madrugador pega o verme, mas o segundo rato pega o queijo.",
    "Alguém em sua vida precisa de uma carta sua.",
    "A fortuna que você procura está em outro biscoito.",
    "Ajuda! Estou sendo mantido prisioneiro em uma padaria chinesa!"
  };

  // Escolhe uma fortuna aleatória
  int randomIndex = std::rand() % fortunes.size();
  std::string fortune = fortunes[randomIndex];

  // Gera números da sorte aleatórios (bônus)
  std::vector<int> luckyNumbers;
  for (int i = 0; i < 6; ++i) {
    luckyNumbers.push_back(std::rand() % 51); // Números entre 0 e 50
  }
  std::sort(luckyNumbers.begin(), luckyNumbers.end()); // Ordena os números

  // Imprime a fortuna e os números da sorte
  std::cout << "🥠 " << fortune << std::endl;
  std::cout << "Números da sorte: ";
  for (size_t i = 0; i < luckyNumbers.size(); ++i) {
    std::cout << luckyNumbers[i] << (i < luckyNumbers.size() - 1 ? ", " : "");
  }
  std::cout << std::endl;

  return 0;
}
