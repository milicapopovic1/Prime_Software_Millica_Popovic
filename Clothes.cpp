#include "Clothes.h"
#include <iostream>
#include <iomanip>
#include <cmath>

Clothes::Clothes(string &n, string &b, double p, string &c) {
    name = n;
    brand = b;
    price = p;
    color = c;
}

void Clothes::print() const {
    cout<<name<<" - "<<brand<<endl;
    cout<<"$"<< fixed<<setprecision(2)<<ceil(price*100)/100<<endl;
}

double Clothes::getPrice() const {
    return price;
}


