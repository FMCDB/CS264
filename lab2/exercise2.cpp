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

    //Sort string vector
    sort(vec.begin(), vec.end());

    //Count the number of times each word appears in the input
    word = vec[0];
    int count = 1;
    for(int i = 1; i < vec.size(); i++){
        if(vec[i] != word){
            cout << word << " appears " << count << " times" << endl;
            word = vec[i];
            count = 0;
        }
        count++;
    }
    cout << word << " appears " << count << " times" << endl;

    return 0;
}