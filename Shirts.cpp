#include <algorithm>
#include "Shirts.h"

string Shirts::str_size[] = {"XS", "S", "M", "L", "XL", "2XL"};

Shirts::Shirts(string n, string b, double p, string c, string s): Clothes(n, b, p, c) {
    size = s;
    if(find(begin(str_size), end(str_size), size)!=end(str_size)) forSale=1;
}

int Shirts::calcDiscount(int dayInWeek) const{
    int discount = 0;
    if(dayInWeek==2) discount = 10;
    return discount;
}
