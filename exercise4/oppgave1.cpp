#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<double> vec{1, 2, 3, 4, 5};
  cout << "front: " << vec.front() << endl;
  cout << "back: " << vec.back() << endl;

  vec.emplace(vec.begin() + 1, 10);

  double number = 5;
  auto search = find(vec.begin(), vec.end(), number);

  if (*search == number) {
    cout << "Found the number: " << *search << endl;
  }
}
