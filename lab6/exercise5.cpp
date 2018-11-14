//Finian BRADWELL 16306561
#include <vector>
#include <iomanip>
#include <ios>
#include <iostream>
#include <algorithm>
using namespace std;

istream& read_words(istream& in, vector<string>& words){
    if(in){
        //get rid of previous contents
        words.clear();

        //read words
        string x;
        while(in >> x) words.push_back(x);

        //clear the stream 
        in.clear();
    }
    return in;
}

int main(){
    //create vector to store words
    vector<string> vec; 

    //use read_words function to read in words from the user      
    read_words(cin,vec);

    //count the number of words 
    cout << "Total number of words in the input: " << vec.size() << endl;

    //Sort string vector
    sort(vec.begin(), vec.end());

    //Count the number of times each word appears in the input
    string word = vec[0];
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