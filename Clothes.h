#ifndef PRIME_CLOTHES_H
#define PRIME_CLOTHES_H
#include <string>
using namespace std;

class Clothes{

protected:
    string name;
    string brand;
    double price;
    string color;
    int forSale = 0;
public:
    friend class Cart;
    Clothes(string &name, string &brand, double price, string &color);
    void print() const;
    double getPrice() const;
    virtual int calcDiscount(int dayInWeek) const =0;
};


#endif //PRIME_CLOTHES_H
