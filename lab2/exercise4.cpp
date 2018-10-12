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
    sort(vec.end(), vec.begin());

    //Print each word in vector and its size
    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << " of size: " << vec[i].size() << endl; 
    }

}