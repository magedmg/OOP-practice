#include <iostream>
#include <memory>
#include <vector>

using namespace std;

template <class T> class Person {
private:
  T name;

public:
  Person(T name) : name(name) {}
};

class Classroom {};

int main() {

  // Class allocator is the default allocator but if you want more control you
  // can use your own in the case of wanting to manage memory yourself
  vector<int, class allocator<int>> yes;

  vector<Person<string>> yes1;

  // can also just have a vector of classrooms
  vector<Classroom> classrooms;

  vector<int> numbers{1, 2, 3, 4, 5, 6, 7, 8, 9};

  // numbers.reserve(1000);

  cout << numbers.capacity() << endl;
  numbers.empty();

  cout << numbers.size() << endl;

  numbers.resize(20);

  for (int i = 0; i < numbers.size(); i++) {
    cout << numbers[i] << endl;
  }
}