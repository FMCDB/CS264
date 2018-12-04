#include "Student_info.h"
using std::istream; using std::vector;

bool compare(const Student_info& x, const Student_info& y){
    return x.name > y.name;
}

istream& read(istream& is, Student_info& s){
    // read and store the student's name and midterm and final exam grades
    is >> s.name >> s.grade;
    return is;
}