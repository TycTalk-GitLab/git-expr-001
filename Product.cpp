#include <iostream>
#include <string>

class Product {
public:
    Product(std::string name, int id, double price)
    : name_(name), id_(id), price_(price) {}

    std::string GetName() const { return name_; }
    int GetId() const { return id_; }
    double GetPrice() const { return price_; }

private:
    std::string name_;
    int id_;
    double price_;
};

int main() {
    Product prod1("Pear", 1, 0.99);
    Product prod2("Bear", 2, 0.59);
  
    std::cout << "Product: " << prod1.GetName() << ", ID: " << prod1.GetId()
              << ", Price: " << prod1.GetPrice() << std::endl;

    std::cout << "Product: " << prod2.GetName() << ", ID: " << prod2.GetId()
              << ", Price: " << prod2.GetPrice() << std::endl;
  
    return 0;
}

