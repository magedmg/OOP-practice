#include <iostream>

#define print() "yes"

#define incrementx(x) x + 1

// limits the output pretty much
enum CoinState { Heads, Tails, Side };

class Coin {
public:
  CoinState getstate() { return CoinState::Heads; }
};

int main() {

  Coin c1;

  CoinState c = c1.getstate();

  std::cout << c << std::endl;

  std::cout << print() << std::endl;

  std::cout << incrementx(2) << std::endl;
}