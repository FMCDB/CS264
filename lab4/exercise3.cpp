#include <algorithm>
#include <iomanip>
#include <iostream>
#include <ios>
#include <vector>
using namespace std;
int main(){
    //Create vector to store doubles
    vector<double> v;
    double x;
    //Store doubles in vector
    while(cin >> x) v.push_back(x); 
    double avg = 0, count = 0;
    //Get sum of values in vector
    for(int i = 0; i < v.size(); i++){
        count += v[i];
    }
    //get average of all values
    avg = count/v.size();
    cout << "Average = " << avg << endl;
}