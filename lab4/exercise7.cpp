#include <algorithm>
#include <iomanip>
#include <ios>
#include <stdexcept>
#include <string>
#include <vector>
#include "Shopping_list.h"
using namespace std;

int main(){
    vector<Shopping_list> lists;
    Shopping_list record;
    string::size_type maxlen = 0;
    cout << "Enter name followed by 4 items \n";
    cout << "e.g., John Banana Apple Pear Paper (in some computer to finish: hit enter and then ctrl+d)\n";

    //read and store all records and find length of longest name
    while(read(cin,record)){
        maxlen = max(maxlen, record.name.size());
        lists.push_back(record);
    }

    //alphabetize the records
    sort(lists.begin(), lists.end(), compare);
    for(vector<Shopping_list>::size_type i = 0; i != lists.size(); i++){
        cout << lists[i].name << string(maxlen + 1 - lists[i].name.size(),' ');
        //output items
        for(int j = 0; j < lists[i].items.size(); j++){
            cout << "item" << lists[i].items[j] << ' ';
        }
        cout << endl;
    }


}



