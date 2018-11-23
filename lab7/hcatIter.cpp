#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string::size_type width(const vector<string>& v){
    string::size_type maxlen = 0;
    for(vector<string>::const_iterator iter = v.begin(); iter != v.end(); ++iter)
        maxlen = max(maxlen, (*iter).size());
    return maxlen;
}

vector<string>hcat(const vector<string>& left, const vector<string>& right){
    vector<string> ret;
    string::size_type width1 = width(left) + 1;
    vector<string>::const_iterator i = left.begin();
    vector<string>::const_iterator j = right.begin();
    while(i != left.end() || j != right.end()){
        string s;
        if(i != left.end())
            s = *(i++);
        s += string(width1 - s.size(), ' ');
        if(j != right.end())
            s += *(j++);
        ret.push_back(s);
    }
    return ret;
}

int main(){
    vector<string> words;
    string x;
    while(cin >> x) words.push_back(x);
    vector<string> vec = hcat(words,words);
    for(int i = 0; i < vec.size(); i++)
        cout << vec[i] << endl;
}