#include <vector> 
#include <algorithm>     
#include "Student_info.h"
#include "fgrade.h"
#include "pgrade.h"
 
using namespace std;

vector<Student_info> extract_pass(vector<Student_info>& students)
{
  vector<Student_info>::iterator iter =
      stable_partition(students.begin(), students.end(), fgrade);
 
  vector<Student_info> pass(iter, students.end());
  students.erase(iter, students.end());
 
  return pass;
}