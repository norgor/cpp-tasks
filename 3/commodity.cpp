#include "commodity.hpp"

const double SALES_TAX_FACTOR = 1.25;

Commodity::Commodity(std::string name_, uint id_, double price_) : 
    name(name_), 
    id(id_), 
    price(price_) {}

const std::string& Commodity::get_name() const {
    return this->name;
}

uint Commodity::get_id() const {
    return this->id;
}

double Commodity::get_price() const {
    return this->get_price(1.);
}

double Commodity::get_price(double quantity) const {
    return this->price * quantity;
}

double Commodity::get_price_with_sales_tax(double quantity) const {
    return this->get_price(quantity) * SALES_TAX_FACTOR;
}

void Commodity::set_price(double price) {
    this->price = price;
}
