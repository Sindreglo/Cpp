#include <iostream>
using namespace std;

int main() {
  double number;
  double *pointer = &number;
  double &reference = number;

  number = 1.0;
  cout << number << endl;

  *pointer = 2.0;
  cout << number << endl;

  reference = 3.0;
  cout << number << endl;
}
