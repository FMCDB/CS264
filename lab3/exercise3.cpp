//Finian BRADWELL 16306561
#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl; using std::setprecision;
using std::vector; using std::sort; using std::streamsize; using std::string;
int main() {
    vector<string> names;
    vector<double> grades;
    cout << "Enter names and homework grades followed by end-of-file." << endl;

    string name;
    double grade;

    //enter names and grades into appropriate vectors
    while (cin >> name && cin >> grade){
        names.push_back(name);
        grades.push_back(grade);
    }

    //Print students names and their grades
    for(int i = 0; i < names.size(); i++){
        cout << names[i] << ": " << grades[i] << endl;
    }
}
    