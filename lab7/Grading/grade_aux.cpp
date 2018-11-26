#include "Student_info.h"  // Student_info
#include "grade.h"  // grade
#include <stdexcept>  // domain_error
 
using namespace std;

double grade_aux(const Student_info& s)
{
  try {
    return grade(s);
  } catch (domain_error) {
    return grade(s.midterm, s.final, 0);
  }
}