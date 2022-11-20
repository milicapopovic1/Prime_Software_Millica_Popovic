#ifndef PRIME_SHOES_H
#define PRIME_SHOES_H
#include "Clothes.h"


class Shoes : public Clothes {
    int size;
public:
    Shoes(string name, string brand, double price, string color, int size);

    int calcDiscount(int dayInWeek) const override;
};


#endif //PRIME_SHOES_H
