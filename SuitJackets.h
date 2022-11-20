#ifndef PRIME_SUITJACKETS_H
#define PRIME_SUITJACKETS_H
#include "Clothes.h"


class SuitJackets: public Clothes{
    int size;
public:
    SuitJackets(string name, string brand, double price, string color, int size);
    int calcDiscount(int dayInWeek) const override;
};


#endif //PRIME_SUITJACKETS_H
