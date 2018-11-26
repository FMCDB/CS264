#include <vector>
#include <algorithm> 
#include "Student_info.h"  
#include "average_grade.h"  
#include "median.h"  
using namespace std;
 
double average_analysis(const vector<Student_info>& students)
{
  vector<double> grades;
  transform(students.begin(), students.end(), back_inserter(grades), average_grade);
  return median(grades);
}