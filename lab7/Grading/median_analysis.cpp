#include <vector>
#include <algorithm> 
#include "Student_info.h"  
#include "grade_aux.h" 
#include "median.h" 

using namespace std;
 
double median_analysis(const vector<Student_info>& students)
{
  vector<double> grades;
  transform(students.begin(), students.end(), back_inserter(grades), grade_aux);
  return median(grades);
}