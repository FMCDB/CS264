#include <vector>  
#include <algorithm>  
#include "Student_info.h"  
#include "optimistic_median.h" 
#include "median.h"  
 
using namespace std;
 
double optimistic_median_analysis(const vector<Student_info>& students)
{
  vector<double> grades;
  transform(students.begin(), students.end(),back_inserter(grades), optimistic_median);
  return median(grades);
}