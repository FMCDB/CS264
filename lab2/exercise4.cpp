//Finian BRADWELL 16306561
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    //Take in words from the user
    vector<string> vec;
    string word;
    while (cin >> word) vec.push_back(word);

    //Sort string vector in reverse order
    sort(vec.begin(), vec.end());

    //Print each word in vector and its size
    for(int i = vec.size()-1; i > -1; i--){
        cout << vec[i] << " of size: " << vec[i].size() << endl; 
    }

}