#include <string>

class Product
{

public:
    Product(int id, int price, std::string name)
    {
        this->Id = id;
        this->Price = price;
        this->Name = name;
    };

public:
    int Id;
    int Price;
    std::string Name;
};