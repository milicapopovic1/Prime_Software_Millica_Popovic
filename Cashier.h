#ifndef PRIME_CASHIER_H
#define PRIME_CASHIER_H
#include <string>
#include "Clothes.h"
#include "Cart.h"
#include "time.h"
using namespace std;

class Cashier {
    static int id;
    int thisId;
public:
    Cashier();
    void printReceipt(Cart* purchase,  Time t);
};

#endif //PRIME_CASHIER_H
