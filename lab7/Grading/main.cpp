#include <iostream>
#include <vector>  
#include "Student_info.h"
#include "did_all_hw.h" 
#include "write_analysis.h" 
#include "median_analysis.h"
#include "average_analysis.h" 
#include "optimistic_median_analysis.h" 
 
using namespace std;
 
int main()
{
  //Students who did and didn't do alltheir homework
  vector<Student_info> did, didnt;

  //read the student records and partition them
  Student_info student;
  while (read(cin, student)) {
    if (did_all_hw(student))
      did.push_back(student);
    else
      didnt.push_back(student);
  }
  //verify that the analyses will show us something
  if (did.empty()) {
    cout << "No student did all the homework!" << endl;
    return 1;
  }
  if (didnt.empty()) {
    cout << "No student did all the homework!" << endl;
    return 1;
  }
  //do the analyses
  write_analysis(cout, "median", median_analysis, did, didnt);
  write_analysis(cout, "average", average_analysis, did, didnt);
  write_analysis(cout, "median of homework turned in", optimistic_median_analysis, did, didnt);
 
  return 0;
}