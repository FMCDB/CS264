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

    //Loop through the vector to find the longest and shortest entries
    string max = vec[0], min = vec[0];
    for(int i = 0; i < vec.size(); i++){
        if(vec[i].size() > max.size()) max = vec[i];
        else if(vec[i].size() < min.size()) min  = vec[i];
    }

    //Print largest and smallest words and their lengths
    int maxLen = max.size(), minLen min.size();
    cout << "smallest word: " << min << " of size " << minLen << endl;
    cout << "largest word: " << max << " of size " << maxLen << endl;

}