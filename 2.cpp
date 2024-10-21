#include <cstdint>
#include <iostream>

class A {
public:
  int *_a;
  int *_b;

  A() {
    _a = new int;
    _b = new int;
    *_a = 0;
    *_b = 0;
  }

  /*
  When you call the copy constructor, it will attempt to create a new object,
  which in turn requires calling the copy constructor again (because other is
  also a MyString object). This results in an infinite loop because each
  invocation of the copy constructor tries to make a copy of the argument passed
  to it, leading to endless calls to itself.
  */

  // Constructor equals
  A(const A &a1) {
    _a = new int;
    _b = new int;
    *_a = *(a1._a);
    *_b = *(a1._b);
  }

  // Equals operator after the constructor has been called
  void operator=(const A &a1) {
    *_a = *(a1._a);
    *_b = *(a1._b);
  }

  void setpoints(int a, int b) {
    *_a = a;
    *_b = b;
  }

  void print() { std::cout << "A: " << *_a << " B: " << *_b << std::endl; }

  virtual ~A() {

    delete _a;
    delete _b;
    std::cout << "A  & B were deleted!" << std::endl;
  }
};

class B : public A {
public:
  int *_t;

  B() : A() {
    _t = new int;
    *_t = 0;
  }

  void setpoints(int a, int b, int t) {
    A::setpoints(a, b);
    *_t = t;
  }

  ~B() {
    delete _t;
    std::cout << "T was deleted! " << std::endl;
  }
};

int main() {
  /*
A a1;

a1.setpoints(1, 1);

a1.print();

A a2;

a2 = a1;

a1.setpoints(2, 2);

a1.print();

a2.print();
*/

  A *a1 = new B;

  A *a2 = a1;

  a2->print();

  a1->setpoints(1, 1);

  delete a1;
  return 0;
}