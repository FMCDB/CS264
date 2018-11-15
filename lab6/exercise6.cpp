#include <vector>
#include <iostream>
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
    for(int i = 0; i < vec.size(); i++){
        cout << endl << "Name: " << vec[i].name << endl << "Age: " << vec[i].age << endl << "Final Grade: " << vec[i].final_grade << endl;
    }
}