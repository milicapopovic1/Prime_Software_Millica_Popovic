#include "Cart.h"
#include <iostream>
using namespace std;

void Cart::add(Clothes* c) {
    if(c->forSale==1){
        Elem* curr = new Elem(c);
        if(!first) first = curr;
        else last->next = curr;
        last = curr;
        count++;
    }
    else cout<<"This product is not for sale."<<endl;

}


