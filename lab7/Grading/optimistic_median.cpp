#include <vector> 
#include <algorithm> 
#include "Student_info.h" 
#include "grade.h"  
#include "median.h"  
 
using namespace std;
 
double optimistic_median(const Student_info& s)
{
  vector<double> nonzero;
  remove_copy(s.homework.begin(), s.homework.end(), back_inserter(nonzero), 0);
  if (nonzero.empty())
    return grade(s.midterm, s.final, 0);
  else
    return grade(s.midterm, s.final, median(nonzero));
}