#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using std::ifstream; using std::ofstream; using std::vector; 
using std::string; using std::endl; using std::getline;

int main(){
    ifstream infile("in1");
    ofstream outfile("out1");
    string s;
    vector<string> vec;
    while(getline(infile,s)){
        vec.push_back(s);
    }
    for(int i = vec.size()-1; i > 0; i--){
        outfile << vec[i] << endl;
    }

    return 0;
}