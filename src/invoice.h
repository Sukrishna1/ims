#pragma once

#include <vector>
#include "product.h"
#include "inventory.h"
#include "cartItem.h"

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
    std::vector<CartItem *> Cart;
    int TotalPrice;

public:
    void AddToCart(int productId, int unit, int price)
    {
        for (auto x : this->inventory->getProducts())
        {
            if (x->Id == productId)
            {
                Product *p = new Product(x->Id, price, x->Name);
                CartItem *ci = new CartItem(p, unit, price);
                this->Cart.push_back(ci);
                return;
            }
        }
    }

    void ChangeCartItem(int productId, int unit, int price)
    {
        for (auto x : this->Cart)
        {
            if (x->getProduct()->Id == productId)
            {
                auto p = x->getProduct();
                p->Price = price;
                x->Unit = unit;
                x->SellingPrice = price;
                return;
            }
        }
    }
};