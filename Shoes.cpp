#include "Shoes.h"

Shoes::Shoes(string n, string b, double p, string c, int s) : Clothes(n, b, p, c){
    size = s;
    if(size>=39 && size<=46) forSale = 1;
}

int Shoes::calcDiscount(int dayInWeek) const {
    int discount = 0;
    if(dayInWeek==2) discount = 25;
    return discount;
}
