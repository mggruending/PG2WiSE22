#ifndef TESTDATE_H
#define TESTDATE_H
#include <iostream>
#include "string"

class Day{
    int val_;
public:
    explicit Day(int v);
    int getVal();
    bool static check(int k) {
        if (1 <= k && k <= 31) {
            return true;
        } else {
            return false;
        }
    }
};

class Month{
    int val_;
public:
    explicit Month(int v);
    int getVal();
    bool static check(int k) {
        if (1 <= k && k <= 12) {
            return true;
        } else {
            return false;
        }
    }
};

class Year{
    int val_;
public:
    explicit Year(int v);
    int getVal();
    bool static leapYear(int k)
    {
        if (k % 4 == 0 && k % 100 != 0) {
            return true;
        } else {
            return false;
        }
    }
    bool static check(int k) {
        if (k >= 1582) {
            return true;
        } else {
            return false;
        }
    }
};

class Date{
    Day d_{1};
    Month m_{1};
    Year y_;
public:
    explicit Date(int y);
    Date(Day d, Month m, Year y);
    std::ostream & printDate(std::ostream &);
    bool check(Day d, Month m, Year y) {
        if ((d.check(d.getVal()) && m.check(m.getVal()) && y.check(y.getVal()))) {
        return true;
        } else {
            return false;
        }
    }
};

Date lastFeb(Year);
std::ostream & operator <<(std::ostream &, Date);
#endif // TESTDATE_H