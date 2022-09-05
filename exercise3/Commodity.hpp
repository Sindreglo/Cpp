#pragma once
#include <string>

using namespace std;
const double MVA = 1.25;

class Commodity {
public:
  Commodity(string name_, int id_, double price_);
  string get_name() const;
  int get_id() const;
  double get_price(double quantity = 1) const;
  void set_price(double price_);
  double get_price_with_sales_tax(double quantity) const;

private:
  string name;
  int id;
  double price;
};

Commodity::Commodity(string name_, int id_, double price_) : name(name_), id(id_), price(price_) {}

string Commodity::get_name() const {
  return name;
}

int Commodity::get_id() const {
  return id;
}

double Commodity::get_price(double quantity) const {
  return price * quantity;
}

void Commodity::set_price(double price_) {
  price = price_;
}

double Commodity::get_price_with_sales_tax(double quantity) const {
  return price * MVA * quantity;
}
