#include <iostream>  
#include <vector>  
#include <string> 
#include "Student_info.h" 
 
using namespace std;
 
void write_analysis(ostream& out,
                    const string& name,
                    double analysis(const vector<Student_info>&),
                    const vector<Student_info>& did,
                    const vector<Student_info>& didnt)
{
  out << name << ": median(did) = " << analysis(did) <<
                 ": median(didnt) = " << analysis(didnt) << endl;
  return;
}