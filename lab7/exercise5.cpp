#include <string>
#include <vector>
#include <numeric>
#include <iostream>
using namespace std;

int main(){
    vector<string> vec;
    string x;
    while(cin >> x){
        vec.push_back(x);
    }
    string s = accumulate(vec.begin(),vec.end(),string(""));
    cout << s << endl;
}