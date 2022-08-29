#include <cstdlib>
#include <fstream>
#include <iostream>

using namespace std; // bruker standard navnerom

void read_temperatures(double temperatures[], int length);

int main() {
  const int length = 5;
  double temperatures[length];
  read_temperatures(temperatures, length);
  return 0;
}

void read_temperatures(double temperatures[], int length) {
  ifstream file("./temperatures");

  if (!file.is_open()) {
    cerr << "Could not open file" << endl;
    exit(EXIT_FAILURE);
  }

  for (int i = 0; i < length; i++) {
    double temp;
    file >> temp;
    temperatures[i] = temp;
  }

  int underTen = 0;
  int tenToTwenty = 0;
  int overTwenty = 0;

  for (int i = 0; i < length; i++) {
    if (temperatures[i] < 10) {
      underTen += 1;
    } else if (temperatures[i] >= 10 && temperatures[i] <= 20) {
      tenToTwenty += 1;
    } else if (temperatures[i] > 20) {
      overTwenty += 1;
    }
  }

  cout << "Antall under 10 er " << underTen << endl;
  cout << "Antall mellom 10 og 20 er " << tenToTwenty << endl;
  cout << "Antall over 20 er " << overTwenty << endl;
}
