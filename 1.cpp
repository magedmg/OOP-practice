#include <iostream>
using namespace std;

// This is an interface
class Printable {
public:
  virtual void print() = 0;
};

class Shape : public Printable {
protected:
  int _x;
  int _y;

public:
  Shape(int x, int y) : _x(x), _y(x) {}

  Shape() : Shape(0, 0) {}
  // This is a pure function
  virtual int area() = 0;

  // if a class has a pure function then it is an abstract class
};

class Rectangle : public Shape {
public:
  Rectangle() : Shape() {}
  Rectangle(int x, int y) : Shape(x, y) {}

  int area() { return _x * _y; }
  void print() {
    cout << _x << endl;
    cout << _y << endl;
  }
};

class Person : public Printable {
private:
  string name;

public:
  Person() : name("yes") {}
  void print() { cout << name << endl; }
};

void print_summary(Printable *p) { p->print(); }

int main() {
  Shape *s1 = new Rectangle(2, 2);

  // cout << s1->area() << endl;

  Person p1;

  print_summary(&p1);

  print_summary(s1);

  // delete s1;
}
