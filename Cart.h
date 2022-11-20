#ifndef PRIME_CART_H
#define PRIME_CART_H

#include "Clothes.h"

class Cart {
    int count=0;
    struct Elem {
        Clothes* cloth;
        Elem* next;
        Elem(Clothes* c, Elem *n = nullptr): cloth(c), next(n) {}
    };
    Elem *first = nullptr, *last = nullptr;

public:
    friend class Cashier;
    Cart() = default;
    void add(Clothes* c);
};


#endif //PRIME_CART_H
