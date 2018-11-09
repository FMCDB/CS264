#ifndef GUARD_Shopping_list
#define GUARD_Shopping_list
#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct Shopping_list {
    string name;
    vector<string> items;
};

bool compare (const Shopping_list&, const Shopping_list&);
istream& read(istream&, Shopping_list&);
istream& read_items(istream&, vector<string>&);
#endif
