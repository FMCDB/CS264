#include <iostream>
#include <string>
#include "letter_grade.h"
using std::cout; using std::cin; using std::endl; using std::string;
int main(){
    string s = letter_grade(23.6);
    cout << s;
}