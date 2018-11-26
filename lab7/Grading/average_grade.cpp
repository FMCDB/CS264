#include "Student_info.h" 
#include "grade.h" 
#include "average.h"

double average_grade(const Student_info& s)
{
  return grade(s.midterm, s.final, average(s.homework));
}