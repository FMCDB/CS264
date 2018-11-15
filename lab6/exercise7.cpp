#include <vector>
#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;

// create struct to store data
struct Student_info {
    string name;
    int age;
    double final_grade;
};

//method to alphabetize student records
bool compare(const Student_info& x, const Student_info& y){
    return x.name < y.name;
}

int main(){

    // vector to store individual strcuts
    vector<Student_info> vec;

    //read data into the vector
    for(int i = 0; i < 10; i++){
        Student_info s;
        cin >> s.name >> s.age >> s.final_grade;
        vec.push_back(s);
    }

    //sort vector by name
    sort(vec.begin(),vec.end(), compare);

    //output information in vector
    cout << "Name:" << setw(10) << "Age:" << setw(20) << "Final Grade:" << '\n';
    for(int i = 0; i < vec.size(); i++){
        cout << vec[i].name << setw(8-(vec[i].name.size()-5)) << vec[i].age << setw(12) << vec[i].final_grade << '\n';
    }
}