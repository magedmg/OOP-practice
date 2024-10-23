// iterators

#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<string> names{"John", "Yuxi", "smith"};

  // & means take the address do not make a copy and const means do not change
  // it in the loop
  for (const auto &name : names) {
    cout << name << endl;
  }

  vector<int> num = {3, 2, 1, 4, 5, 6};

  sort(num.begin(), num.end());

  for (const auto &numbers : num) {
    cout << numbers << endl;
  }

  reverse(num.begin(), num.end());

  vector<int>::iterator itr = find(num.begin(), num.end(), 4);

  // this returns an iterator to 3
  auto n1 = find(num.begin(), num.end(), 3);
  // deferences it to print out 3
  cout << *n1 << endl;
}