#include <iostream>
#include "Clothes.h"
#include "Shoes.h"
#include "Shirts.h"
#include "SuitJackets.h"
#include "Trousers.h"
#include "Cart.h"
#include "Cashier.h"

int Cashier::id = 0;

int main() {
//    ---THE FIRST EXAMPLE---
//    Shirts* shirt1 = new Shirts("Blue Cotton Shirt", "BrandS", 14.99, "blue", "M");
//    Shirts* shirt2 = new Shirts("White Cotton Shirt", "BrandS", 15.99, "white", "M");
//    Trousers* trousers1 = new Trousers("Black Cotton Trousers", "BrandT", 29.99, "blue", 50);
//    Shoes* shoes1 = new Shoes("Black Leather Shoes", "BrandS", 59.99, "black", 43);
//    SuitJackets* jacket1 = new SuitJackets("Black Cotton Suit Jacket", "BrandJ", 99.99, "black", 50);
//
//    Cart* cart1 = new Cart();
//    cart1->add(shirt1);
//    cart1->add(shirt2);
//    cart1->add(trousers1);
//    cart1->add(shoes1);
//    cart1->add(jacket1);
//
//    Cashier* cashier1 = new Cashier();
//    Time t=Time(2022,2,2,12,34,56);
//    cashier1->printReceipt(cart1, t);

//    ---THE SECOND EXAMPLE---
//
//    Shirts* shirt1 = new Shirts("Black Silk Shirt", "BrandS", 29.99, "black", "L");
//    Shirts* shirt2 = new Shirts("White Silk Shirt", "BrandS", 29.99, "white", "L");
//
//    Cart* cart1 = new Cart();
//    cart1->add(shirt1);
//    cart1->add(shirt2);
//
//    Cashier* cashier2 = new Cashier();
//    Time t=Time(2022,2,1,12,34,56);
//    cashier2->printReceipt(cart1, t);

//    ---THE THIRD EXAMPLE---

    Trousers* trousers1 = new Trousers("Red Linen Trousers", "BrandT", 49.99, "red", 56);
    Shoes* shoes1 = new Shoes("Red Suede Shoes", "BrandS", 59.99, "red", 44);
    Shoes* shoes2 = new Shoes("Black Suede Shoes", "BrandS", 59.99, "black", 44);
    SuitJackets* jacket1 = new SuitJackets("Red Linen Suit Jacket", "BrandJ", 99.99, "red", 56);
    Shirts* shirt1 = new Shirts("White Linen Shirt", "BrandS", 29.99, "white", "L");

    Cart* cart1 = new Cart();
    cart1->add(trousers1);
    cart1->add(shoes1);
    cart1->add(shoes2);
    cart1->add(jacket1);
    cart1->add(shirt1);

    Cashier* cashier3 = new Cashier();
    Time t=Time(2022,2,1,12,34,56);
    cashier3->printReceipt(cart1, t);

    return 0;
}
