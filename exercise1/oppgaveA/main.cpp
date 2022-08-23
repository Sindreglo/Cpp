#include <fstream>
#include <iostream>

using namespace std; // bruker standard navnerom

int main() {
  const int length = 5;
  int underTen = 0;
  int tenToTwenty = 0;
  int overTwenty = 0;

  cout << "Du skal skrive inn 5 temperaturer." << endl;

  for (int i = 0; i < 5; i++) {
    double temperature;
    cout << "Temperatur nr " << i + 1 << ":"; // utskrift, bruker <iostream>
    cin >> temperature;                       // innlesing, bruker <iostream>

    if (temperature < 10) {
      underTen += 1;
    } else if (temperature >= 10 && temperature <= 20) {
      tenToTwenty += 1;
    } else if (temperature > 20) {
      overTwenty += 1;
    }
  }

  cout << "Antall under 10 er " << underTen << endl;
  cout << "Antall mellom 10 og 20 er " << tenToTwenty << endl;
  cout << "Antall over 20 er " << overTwenty << endl;

  return 0;
}
