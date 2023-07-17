#include <vector>
#include <product.h>

using namespace std;

class Inventory
{
private:
    std::vector<Product *> Products;

public:
    void Load()
    {
        // read from text file and show.
        Products.push_back(new Product(1, 10, "ABC"));
        Products.push_back(new Product(2, 20, "DEF"));
        Products.push_back(new Product(3, 30, "IJK"));
        Products.push_back(new Product(4, 40, "LMN"));
        Products.push_back(new Product(5, 50, "OPQ"));
    };
};