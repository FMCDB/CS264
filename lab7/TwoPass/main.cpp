#include <iostream> 
#include <string>      
#include <vector>      
#include <algorithm> 
#include "Student_info.h" 
#include "extract_fails.h"
#include "grade.h" 
 
using namespace std;
 
int main()
{
    vector<Student_info> students;
    Student_info record;
 
    while (read(cin, record))
        students.push_back(record);
 
    vector<Student_info> students_failed = extract_fails(students);
 
    sort(students.begin(),students.end(),compare);
    sort(students_failed.begin(),students_failed.end(),compare);

    cout << "Students who passed:" << endl;
    for (vector<Student_info>::const_iterator i = students.begin();
         i != students.end(); ++i)
        cout << i->name << " (" << grade(*i) << ")" << endl;
 
    // Report failing students
    cout << "Students who failed:" << endl;
    for (vector<Student_info>::const_iterator i = students_failed.begin();
         i != students_failed.end(); ++i)
        cout << i->name << " (" << grade(*i) << ")" << endl;
 
    return 0;
}