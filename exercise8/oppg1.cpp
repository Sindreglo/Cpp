#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

template <typename T>
bool equal(T a, T b) {
  cout << "Generic    ";
  return a == b;
}

bool equal(double a, double b) {
  double TOL = 0.00001;
  cout << setprecision(6) << "Specialized: "
       << " a: " << a << " b: " << b << "    ";
  return abs(a - b) < TOL;
}

int main(void) {
  cout << "String should be true: " << equal("a", "a") << endl;
  cout << "String should be false: " << equal("a", "b") << endl;

  cout << "Integer should be true: " << equal(1, 1) << endl;
  cout << "Integer should be false: " << equal(1, 2) << endl;

  cout << "Double should be true: " << equal(0.7123123, 0.7123123) << endl;
  cout << "Double should be false: " << equal(0.7122123, 0.7123123) << endl;
  return 0;
}
