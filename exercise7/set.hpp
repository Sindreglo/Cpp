#pragma once

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Set {
  bool number_exists(int integer) const;

public:
  vector<int> table;
  Set();
  Set &operator<<(const Set &other);
  Set &operator+=(int integer);
  Set &operator=(const Set &set);
  friend ostream &operator<<(ostream &os, const Set &set);
};

// Lager ny tom mengde
Set::Set() {}

// Finner unionen av to mengder
Set &Set::operator<<(const Set &other) {
  for (int integer : other.table)
    *this += integer;
  return *this;
}

bool Set::number_exists(int integer) const {
  for (int table_integer : table) {
    if (table_integer == integer)
      return true;
  }
  return false;
};

// Legger til et nytt tall i en mengde
Set &Set::operator+=(int integer) {
  if (!number_exists(integer))
    table.push_back(integer);
  return *this;
};

// Setter en mengde lik en annen mengde
Set &Set::operator=(const Set &set) {
  table = set.table;
  return *this;
};

// Skriver ut en mengde
ostream &operator<<(ostream &os, const Set &set) {
  os << "{ ";
  for (int i = 0; i < set.table.size() - 1; i++)
    os << set.table[i] << ", ";
  os << set.table[set.table.size() - 1];
  os << " }";

  return os;
};
