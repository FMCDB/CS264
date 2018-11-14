//Finian BRADWELL 16306561
#include <vector>
#include <iomanip>
#include <ios>
#include <iostream>
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
    vector<string> words; 

    //use read_words function to read in words from the user      
    read_words(cin,words);

    //count the number of words 
    cout << words.size() << endl;
    return 0;
}