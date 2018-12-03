#include <string>
using std::string;
 
string getLetterGrade(double grade) {
    if (grade >= 97.0) return "A+";
    else if (grade >= 94.0 && grade < 97.0) return "A";
    else if (grade >= 90.0 && grade < 94.0) return "A-";
    else if (grade >= 87.0 && grade < 90.0) return "B+";
    else if (grade >= 84.0 && grade < 87.0) return "B";
    else if (grade >= 80.0 && grade < 84.0) return "B-";
    else if (grade >= 77.0 && grade < 80.0) return "C+";
    else if (grade >= 74.0 && grade < 77.0) return "C";
    else if (grade >= 70.0 && grade < 74.0) return "C-";
    else if (grade >= 60.0 && grade < 70.0) return "D";
    else return "F";
}