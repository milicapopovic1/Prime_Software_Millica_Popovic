#include "Cashier.h"
#include "Shirts.h"
#include "Shoes.h"
#include "SuitJackets.h"
#include "Trousers.h"
#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

void Cashier::printReceipt(Cart* purchase, Time t) {

    int dayInWeek = t.dayInWeek();
    double subtotal=0., discount = 0.;
    cout<<"Date:"<<t<<"---Products---"<<endl;
    Cart::Elem* curr = purchase->first;
    for (int i = 0; i < purchase->count; ++i) {
        int specialDiscount = curr->cloth->calcDiscount(dayInWeek);
        int finalDiscount = (purchase->count>=3)?max(20,specialDiscount):specialDiscount;

        cout<<endl;
        curr->cloth->print();
        cout<<"#discount "<<finalDiscount<<"% -$"<<fixed<<setprecision(2)<<ceil((curr->cloth->getPrice()*finalDiscount/100)*100)/100<<endl;

        subtotal += curr->cloth->getPrice();
        discount+=ceil(curr->cloth->getPrice()*finalDiscount)/100;
        curr = curr->next;
    }

    cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"SUBTOTAL:$"<<ceil(subtotal*100)/100<<endl;
    cout<<"DISCOUNT:-$"<<fixed<<setprecision(2)<< ceil(discount*100)/100<<endl;
    cout<<"TOTAL:$"<<ceil((subtotal-discount)*100)/100;
}

Cashier::Cashier() {
    thisId = ++id;
}
