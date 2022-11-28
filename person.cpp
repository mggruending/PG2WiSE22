#ifndef PERSON
#define PERSON

#include "person.h"
#include "iostream"

struct PStruct {
    std::string surname;
    Eyecolor eyecolor;
    double height;
    bool gender;
public:
    friend std::ostream& operator<<(std::ostream& os, PStruct& p) {
        return os;
    }
    void static print(PStruct &p1, PStruct& p) {
        int c = static_cast<int>(p.eyecolor);
        std::cout << p.surname << "\n" << c << "\n" << p.height << "\n" << p.gender << "\n";
    }
};



#endif //PERSON