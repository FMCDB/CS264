#include <vector>
#include <iostream>
#include <string>
#include "Student_info.h"

double grade(double midterm, double final, double homework){
    return 0.2 * midterm + 0.4 * final + 0.4 * homework;
}

double grade(const Student_info& s){
    return grade(s.midterm, s.final, s.homework);
}

struct Student_info s{
    //std::string name;
    //double midterm;
    double final = grade(s);
    //std::vector<double> homework;
};

