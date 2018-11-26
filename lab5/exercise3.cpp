//Finian BRADWELL 16306561
#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
#include <list>
#include "grade.h"
#include "Student_info.h"
using std::cin; using std::cout; using std::endl; using std::domain_error; using std::max;
using std::setprecision; using std::sort; using std::streamsize; using std::string; using std::vector; using std::list; 

bool fgrade(const Student_info& s){
    return grade(s) < 60;
}

//using vectors
vector<Student_info> extract_fails(vector<Student_info>& students){
    vector<Student_info> fail;
    vector<Student_info>::iterator iter = students.begin();
    while(iter != students.end()){
        if(fgrade(*iter)){
            fail.push_back(*iter);
            iter = students.erase(iter);
        }
        else iter++;
    }
    return fail;
}

//using lists
list<Student_info> extract_fails(list<Student_info>& students){
    list<Student_info> fail;
    list<Student_info>::iterator iter = students.begin();
    while(iter != students.end()){
        if(fgrade(*iter)){
            fail.push_back(*iter);
            iter = students.erase(iter);
        }
        else iter++;
    }
    return fail;
}

int main(){

    // typedef list<Student_info> students;
    typedef vector<Student_info> students;

    Student_info record;
    string::size_type maxlen = 0; //the length of the longest name
    cout << "enter name followed by modterm grade, final exam grade and these followed by"
        << " homework assignment grades \n";
    cout << "e.g., Smith 93 91 47 90 92 73 100 87 (in some computer to finish: hit enter and then crtl+d)\n";
    cout << "output: Smith 90.4\n";
    while(read(cin, record)){
        maxlen = max(maxlen, record.name.size());
        students.push_back(record);
    }

    sort(students.begin(),students.end(), compare); //alphabetize the student records

    //extract fails 
    Student_info fails = extract_fails(students); 

    //write the passing names and grades
    cout << "Passing Grades: " << endl;
    for(vector<Student_info>::size_type i = 0; i != students.size(); ++i){
        //wite the names padded on the right to maxlen +1 characters
        cout << students[i].name << string(maxlen+1 - students[i].name.size(), ' ');
        try{
            double final_grade = grade(students[i]);
            streamsize prec = cout.precision();
            cout << setprecision(3) << final_grade << setprecision(prec);
        }
        catch(domain_error& e){
            cout << e.what();
        }
        cout << endl;
    }
    
    //write the failing names and grades
    cout << "Failing Grades: " << endl;
    for(vector<Student_info>::size_type i = 0; i != fails.size(); ++i){
        cout << fails[i].name << string(maxlen+1 - fails[i].name.size(), ' ');
        try{
            double final_grade = grade(fails[i]);
            streamsize prec = cout.precision();
            cout << setprecision(3) << final_grade << setprecision(prec);
        }
        catch(domain_error& e){
            cout << e.what();
        }
        cout << endl;
    }
    return 0; 
} 