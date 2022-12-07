#include "testDate.h"
#include <cstdio>
using namespace std;

int main()
{
    string s;
    int d1{}, m1{}, y1{}, d2{}, m2{}, y2{}, n{};
    bool b{};
    Date date1{Day(0), Month(0), Year(0)};
    Date date2{Day(0), Month(0), Year(0)};
    do {
        cout << "1st date: (dd.mm.yyyy): ";
        if(!(cin >> s)) // if somebody uses <ctrl>+c here
            break;
        sscanf_s(s.c_str(), "%d.%d.%d", &d1, &m1, &y1);
        date1 = {Day{d1}, Month{m1}, Year{y1}};
        if (b = !date1.check())
            cout << '\n' << date1 << " is not a valid date.\n\n";
    } while(b);
    do {
        cout << "2nd date: (dd.mm.yyyy), end: (0.0.0): ";
        if(!(cin >> s)) // if somebody uses <ctrl>+c here
            break;
        sscanf_s(s.c_str(), "%d.%d.%d", &d2, &m2, &y2);
        if(b = !d2 && !m2 && !y2)
            break;
        date2 = {Day{d2}, Month{m2}, Year{y2}};
        if (!date2.check()){
            cout << '\n' << date2 << " is not a valid date.\n\n";
            continue;
        }
        n = date1.compare(date2);
        cout << date1 << " ";
        cout << (n ? ((n < 0) ? "< " : "> ") : "== ") << date2 << "\n\n";
    } while (!b);
    return 0;
}