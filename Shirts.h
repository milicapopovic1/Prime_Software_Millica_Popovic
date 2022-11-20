#ifndef PRIME_SHIRTS_H
#define PRIME_SHIRTS_H
#include "Clothes.h"


class Shirts : public Clothes{
    string size;
    static string str_size[];
public:
    Shirts(string name, string brand, double price, string color, string size);
    int calcDiscount (int dayInWeek) const override;

};


#endif //PRIME_SHIRTS_H
