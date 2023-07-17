#include "inventory.h"
#include "invoice.h"
#include "iostream"

int main(int argc, char *argv[])
{
    std::cout << "Welcome to IMS.\n Press Enter to see products available in inevntory." << std::endl;
    std::cin.get();

    // Load inventory
    Inventory *inventory = new Inventory();
    inventory->Load();

    for (auto inv : inventory->getProducts())
    {
        std::cout << inv->Name << " " << inv->Id << " " << inv->Price << std::endl;
    }

    delete inventory;
    return 0;
}