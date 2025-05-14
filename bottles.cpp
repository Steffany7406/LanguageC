#include <iostream>

int main() {
  for (int i = 99; i >= 0; i--) {
    if (i > 0) {
      std::cout << i << " bottles of beer on the wall.\n";
      std::cout << i << " bottles of beer,\n";
      std::cout << "Take one down and pass it around,\n";
      std::cout << i - 1 << (i - 1 == 1 ? " bottle" : " bottles") << " of beer on the wall.\n\n";
    } else {
      std::cout << "No more bottles of beer on the wall,\n";
      std::cout << "No more bottles of beer.\n";
      std::cout << "Go to the store and buy some more,\n";
      std::cout << "99 bottles of beer on the wall.\n";
    }
  }
  return 0;
}

//

#include <iostream>

int main() {
  for (int i = 99; i > 0; i--){
    std::cout << i << " bottles in the wall.\n";
    std::cout << i << " bottle of beer\n";
    std::cout << "Take one down, pass it around\n\n";
    std::cout << i-1 << " bottles of beer in the wall\n";
  }
}
