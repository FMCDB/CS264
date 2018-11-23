#include <string>
#include <vector>
#include <iostream>
using namespace std;

string::size_type width(const vector<string>& v){
    string::size_type maxlen = 0;
    for(vector<string>::const_iterator iter = v.begin(); iter != v.end(); ++iter)
        maxlen = max(maxlen, (*iter).size());
    return maxlen;
}

vector<string> frame(const vector<string>& v){
    vector<string> ret;
    string::size_type maxlen = width(v);
    string border (maxlen + 4, '*'); //1 space + 1 star for left (same for right)
    //write top of border
    ret.push_back(border);
    for(vector<string>::const_iterator iter = v.begin(); iter != v.end(); ++iter){
        ret.push_back("* " + (*iter) + string(maxlen - (*iter).size(), ' ') + " *");
    }
    //write bottom border
    ret.push_back(border);
    return ret;
}

int main(){
    vector<string> vec;
    string x;
    while(cin >> x) vec.push_back(x);
    vector<string> fvec = frame(vec);
    for(int i = 0; i < fvec.size(); i++)
        cout << fvec[i] << endl;
}