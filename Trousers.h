#ifndef PRIME_TROUSERS_H
#define PRIME_TROUSERS_H
#include "Clothes.h"

class Trousers : public Clothes{
    int size;
public:
    Trousers(string name, string brand, double price, string color, int size);
    int calcDiscount (int dayInWeek) const override;
};


#endif //PRIME_TROUSERS_H
