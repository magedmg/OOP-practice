#include <iostream>

// static means it a global variable that the class can use, but is the same for
// all the objects
class Student {
private:
  int id;
  static int count;

public:
  // static int count;

  Student() { id = count++; }

  int get_ID() { return id; }

  static int get_count() { return count; }
};

int Student::count = 0;

int main() {
  using std::cout;
  /*
  Student s1;
  Student s2;
  Student s3;

  cout << s1.get_ID() << std::endl;
  cout << s2.get_ID() << std::endl;
  cout << s3.get_ID() << std::endl;

  */

  // cout << Student::count << std::endl;

  cout << Student::get_count() << std::endl;

  int num = 5;

  // an array of pointers
  Student **classroom;
  classroom = new Student *[num];

  for (int i = 0; i < num; i++) {
    // Here, for each element of the classroom array (which is a pointer to a
    // Student), a new Student object is dynamically allocated. So, each element
    // of the classroom array points to a separate Student object in memory.
    classroom[i] = new Student();
  }

  Student *classroom2;
  // classroom2 = new Student[num];: Here, a block of memory is allocated for
  // num Student objects, all contiguous in memory. Each object is constructed
  // in place, and you can access them directly using array indexing (e.g.,
  // classroom2[i]).
  classroom2 = new Student[num];

  return 0;
}