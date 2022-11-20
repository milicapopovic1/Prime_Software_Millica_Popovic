#include "Time.h"

Time::Time(int y, int mon, int d, int h, int min, int sec) {
    year = y;
    month = mon;
    day = d;
    hour = h;
    minute = min;
    second = sec;
}

int Time::dayInWeek() const {
    int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    int y=year;
    y -= month < 3;
    return (y + y/4 - y/100 + y/400 + t[month-1] + day) % 7;
}

void Time::print(ostream &os) const {
    os<<setw(4) << setfill('0')<< to_string(year)<<"-"<< setw(2) << setfill('0')<<to_string(month)<<"-"<< setw(2) << setfill('0')<<to_string(day)<<" ";
    os<<setw(2) << setfill('0')<< to_string(hour)<<":"<< setw(2) << setfill('0')<<to_string(minute)<<":"<< setw(2) << setfill('0')<<to_string(second)<<endl;
}

ostream& operator<<(ostream& os, const Time& t){
    t.print(os);
    return os;
}

