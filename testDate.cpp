#include "testDate.h"
#include <iomanip>

Day::Day(int v) : val_(v){}
int Day::getVal(){return val_;}
Month::Month(int v) : val_(v){}
int Month::getVal(){return val_;}
Year::Year(int v) : val_(v){}
int Year::getVal(){return val_;}
Date::Date(int y) : y_(y){}
Date::Date(Day d, Month m, Year y) : d_(d), m_(m), y_(y){}

/*Date lastFeb(Year year){
    const int Y = year.getVal();
    bool b = !(Y % 4) && Y % 100 || !(Y % 400);
    return b ? Date{29, 2, year} : Date{28, 2, year};
} */


std::ostream & Date::printDate(std::ostream & os){
    return os << std::setw(2) << std::setfill('0') \
<< d_.getVal() << '.'\
<< std::setw(2) << std::setfill('0') \
<< m_.getVal() << '.' \
<< y_.getVal() << '\n';
}

std::ostream & operator <<(std::ostream & os, Date d){
    return d.printDate(os);
}