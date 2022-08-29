#include <iostream>

using namespace std; // bruker standard navnerom, se cout nedenfor

int main() {
  int i = 3;
  int j = 5;
  int *p = &i;
  int *q = &j;

  cout << "Oppgave a) " << endl;

  cout << "i: " << i << "\t\t\t\t\t\t&i: " << &i << endl;
  cout << "j: " << j << "\t\t\t\t\t\t&j: " << &j << endl;
  cout << "p: " << p << "\t\t\t\t&p: " << &p << endl;
  cout << "q: " << q << "\t\t\t\t&q: " << &q << endl;

  cout << "\nOppgave b) " << endl;

  *p = 7;
  *q += 4;
  *q = *p + 1;
  p = q;
  cout << *p << " " << *q << endl;
  cout << "\ni: " << i << "\t\t\t\t\t\t&i: " << &i << endl;
  cout << "j: " << j << "\t\t\t\t\t\t&j: " << &j << endl;
  cout << "p: " << p << "\t\t\t\t&p: " << &p << endl;
  cout << "q: " << q << "\t\t\t\t&q: " << &q << endl;
}
