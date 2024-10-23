#include <iostream>

// you can call it either typename or class
template <class T1, class T2> class Pair {
private:
  T1 one;
  T2 two;

public:
  Pair(T1 one, T2 two) : one(one), two(two) {}
};

template <typename T3> class Point {
private:
  T3 pt;

public:
  Point(T3 pt) : pt(pt) {}
};

int main() {

  Point<int> p1(2);
  Point<float> p2(2.2);

  Pair<int, std::string> p3(0, "yes");

  Pair<Point<int>, Point<int>> p4(p1, p1);

  return 0;
}