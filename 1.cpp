#include <iostream>
using namespace std;

class A {
protected:
  int m;
  int p;
  int t;

public:
  A(int m, int p, int t) : m(m), p(p), t(t) {}

  // Dynamic and static binding is shown when you add and remove the virtual

  // virtual void print() {
  // cout << "M: " << m << " P: " << p << " T: " << t << endl;
  //}
  virtual void print() {
    cout << "M: " << m << " P: " << p << " T: " << t << endl;
  }
};

class B : public A {
public:
  int l;
  int o;

public:
  B(int m, int p, int t, int l, int o) : A(m, p, t), l(l), o(o){};
  // The override just tells the person coding that this is an overriding
  // function
  // also the compiler will through an error if it does not override helping the
  // user
  void print() override {
    cout << "M: " << m << " P: " << p << " T: " << t << " L: " << l
         << " O: " << o << endl;
  }
};

class C : public B {
private:
  int a;

public:
  C(int m, int p, int t, int l, int o, int a) : B(m, p, t, l, o), a(a) {}
  void print() {
    cout << "M: " << m << " P: " << p << " T: " << t << " L: " << l
         << " O: " << o << " A: " << a << endl;
  }
};

void foo(A *a) { a->print(); }

int main() {

  A a1(0, 0, 0);

  B b1(0, 0, 0, 1, 1);

  C c1(1, 1, 1, 1, 1, 1);

  a1.print();

  b1.print();

  c1.print();

  foo(&b1);

  foo(&c1);

  return 0;
}