#include "Shopping_list.h"
using std::istream; using std::vector;

bool compare (const Shopping_list& x, const Shopping_list& y){
    return x.name < y.name;
}

istream& read(istream& is, Shopping_list& s){
    // read and store person's name and items
    is >> s.name;
    read_items(is, s.items); //read and store all person's items
    return is;
}

//read items from an input stream into a vector
istream& read_items(istream& in, vector<string>& things){
    if(in){
        //get rid of previous contents
        things.clear();
        //read items
        string x;
        int n = 0;
        while ((n < 4) && in >> x){
            things.push_back(x); 
            n++;
        }
        // clear stream so input will apperar for the next person
        in.clear();
    }
    return in;
}