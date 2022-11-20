#include "SuitJackets.h"

SuitJackets::SuitJackets(string n, string b, double p, string c, int s) : Clothes(n, b, p, c){
    size = s;
    if(size>=42 && size<=66 && (size&1)==0) forSale=1;
}

int SuitJackets::calcDiscount(int dayInWeek) const{
    int discount =0;
    return discount;
}
