// C++ Program to implement Class Template Arguments
// Deduction

#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

// Defining class template
template <typename T> class student {
private:
  string student_name;
  T total_marks;

public:
  // Parameterized constructor
  student(string n, T m) : student_name(n), total_marks(m) {}

  void getinfo() {
    // printing the details of the student
    cout << "STUDENT NAME: " << student_name << endl;
    cout << "TOTAL MARKS: " << total_marks << endl;
    cout << "Type ID: " << typeid(total_marks).name() << endl;
  }
};

typedef student<int> student_i;

typedef student<int> *student_i_ptr; // define a int pointer as well can work

int main() {

  student_i s1("Vipul", 100);       // Deduces student<int>
  student<double> s2("Yash", 98.5); // Deduces student<double>

  student<string> s3("Yash", "skibidi"); // Deduces student<string>

  student_i_ptr s4 = new student_i("Maged", 100);

  s1.getinfo();
  s2.getinfo();

  s3.getinfo();

  s4->getinfo();

  return 0;
}