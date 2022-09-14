#pragma once

#include <string>

class Commodity {
    std::string name;
    uint id;
    double price;

public:
    Commodity(std::string name_, uint id_, double price_);

    const std::string& get_name() const;
    uint get_id() const;
    double get_price() const;
    double get_price(double quantity) const;
    double get_price_with_sales_tax(double quantity) const;
    void set_price(double price);
};
