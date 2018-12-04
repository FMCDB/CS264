#ifndef GUARD_Student_info
#define GUARD_Student_info

#include <vector>
#include <iostream>
#include <string>
struct Student_info {
    std::string name;
    double grade;
};

bool compare(const Student_info&, const Student_info&);
std::istream& read(std::istream&, Student_info&);
#endif