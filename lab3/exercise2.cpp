//Finian BRADWELL 16306561
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::setprecision; using std::string; using std::streamsize;
int main(){

    //Get positive and negative numbers from the user
    int pos = 0, neg = 0;
    cout << "Enter a positive number: ";
    cin >> pos;
    cout << "Enter a negative number: ";
    cin >> neg;

    //Print the range of the entered numbers line by line from positive to negative
    for(int i = pos; i > neg-1; i--){
        cout << i << endl;
    }

    return 0;
}