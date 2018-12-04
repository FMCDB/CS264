#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include "Student_info.h"
using std::ifstream; using std::ofstream; using std::vector; using std::sort;
using std::string; using std::endl; using std::cout; using std::getline;

int main(){
    ifstream infile("cols");
    Student_info s;
    vector<Student_info> vec;
    while(read(infile,s)){
        vec.push_back(s);
    }
    sort(vec.begin(),vec.end(), compare);
    for(int i = 0; i < vec.size(); i++){
        cout << vec[i].name << " " << vec[i].grade << endl;
    }

    return 0;
}