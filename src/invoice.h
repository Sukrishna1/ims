#pragma once

#include <vector>
#include "product.h"
#include "inventory.h"

class Invoice
{

private:
    Inventory *inventory;

public:
    Invoice(Inventory *inventory, int invoiceId)
    {
        this->inventory = inventory;
        this->InvoiceId = invoiceId;
    };

public:
    int InvoiceId;
    std::vector<Product> Cart;
    int TotalPrice;

public:
    void AddToCart()
    {
    }
};