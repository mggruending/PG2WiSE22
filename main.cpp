#include <iostream>
#include "person.cpp"
#include "vector"


int main() {
    PStruct p1;
    PStruct p2{};
    PStruct p3{"Gründing", Eyecolor::green, 1.84, 1};
    std::vector<PStruct> PVec {p1, p2, p3};
    for (auto& item : PVec) {
        std::cout << item;
    }
    return 0;
}