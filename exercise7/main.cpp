#include "fraction.hpp"
#include "set.hpp"
#include <iostream>
#include <string>

using namespace std;

void print(const string &text, const Fraction &broek) {
  cout << text << broek.numerator << " / " << broek.denominator << endl;
}

int main() {
  Fraction a(10, 20);
  Fraction b(3, 4);
  Fraction c;
  c.set(5);
  Fraction d = a / b;

  print("a = ", a);
  print("b = ", b);
  print("c = ", c);
  print("d = ", d);

  b += a;
  ++c;
  d *= d;

  print("b = ", b);
  print("c = ", c);
  print("d = ", d);

  c = a + b - d * a;
  c = -c;

  print("c = ", c);

  if (a + b != c + d)
    cout << "a + b != c + d" << endl;
  else
    cout << " a + b == c + d" << endl;
  while (b > a)
    b -= a;
  print("b = ", b);

  // oppgave 1 a)

  Fraction fraction1(3, 6);
  print("Fraction1 = ", fraction1);
  print("fraction1 - 5 = ", fraction1 - 5);
  print("5 - fraction1 = ", 5 - fraction1);

  // oppgave 1 b)
  // 5-3 = operator-(int,int) = 2
  // 2 - fraction1 = operator-(int, const Fraction &fraction)
  // (2 - fraction1) - 7 = fraction1.operator-(int integer)
  // ((2 - fraction1) - 7) - fraction2 = fraction1.operator-(const Fraction &fraction)

  Set set1;
  set1 += 1;
  set1 += 2;
  set1 += 2;
  cout << "Set1 = " << set1 << endl;

  Set set2;
  set2 += 3;
  set2 += 1;
  cout << "Set2 = " << set2 << endl;

  set2 << set1;
  cout << "After union = " << set2 << endl;

  auto set4 = set2;
  cout << "Set4 = " << set4 << endl;
}
