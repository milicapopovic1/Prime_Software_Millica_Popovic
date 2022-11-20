#ifndef PRIME_TIME_H
#define PRIME_TIME_H
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;


class Time {
    int day, month, year, hour, minute, second;
    void print(ostream& os) const;
public:
    friend ostream& operator<<(ostream& os, const Time& t);
    Time(int y,int mon,int d,int h,int min,int sec);
    int dayInWeek() const;
};


#endif //PRIME_TIME_H
