#include <iostream>
using namespace std;
#include <map>

int main() {

  map<string, int> t;

  pair<string, int> e = {"yes", 10};

  t.insert(e);

  t.insert({"john", 2});

  int id = t["yes"];

  cout << id << endl;
};