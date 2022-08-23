#include <iostream>

using namespace std; // bruker standard navnerom

int main() {
    double temperatures[5];
    int underTen = 0;
    int tenToTwenty = 0;
    int overTwenty = 0;
    const int length = 5;
    
    std::cout << "Du skal skrive inn 5 temperaturer." << std::endl;   
    
    for (int i = 0; i<5; i++) {
        cout << "Temperatur nr " << i + 1 << ":"; // utskrift, bruker <iostream>
           cin >> temperatures[i];              // innlesing, bruker <iostream>
    }
    
    for (int i = 0; i<5; i++) {
        if (temperatures[i] < 10) {
            underTen += 1;
        } else if (temperatures[i] >= 10 && temperatures[i] <= 20) {
            tenToTwenty += 1;
        } else if (temperatures[i] > 20) {
            overTwenty += 1;
        }      
    }
    
    std::cout << "Antall under 10 er " << underTen << std::endl;
    std::cout << "Antall mellom 10 og 20 er " << tenToTwenty << std::endl;
    std::cout << "Antall over 20 er " << overTwenty << std::endl; 
    return 0;    
}
