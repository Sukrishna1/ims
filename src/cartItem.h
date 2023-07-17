#pragma once

#include "product.h"

class CartItem
{
public:
    CartItem(const Product *product, int unit, int sellingPrice)
    {
        this->product = *product;
        this->Unit = unit;
        this->SellingPrice = sellingPrice;
    };

    Product *getProduct()
    {
        return &product;
    };

    int Unit;
    int SellingPrice;

private:
    Product product;
};
