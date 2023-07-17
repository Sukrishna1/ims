#include "product.h"
#include "inventory.h"
#include "invoice.h"
#include "iostream"

using namespace std;

int main(int argc, char *argv[])
{
    std::cout << "Welcome to IMS" << std::endl;
    std::cin.get();

    // Load inventory
    Inventory *inventory = new Inventory();
    inventory->Load();
    return 0;
}