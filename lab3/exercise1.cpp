//Finian BRADWELL 16306561
#include <iostream>
#include <string>
using std::cin; using std::endl;
using std::cout; using std::string;
int main() {
    //the number of rows and columns to write
    int rows = 3, cols = 4;
    //write rows of output
    //invariant: we have written r rows so far
    cout << endl;
    for (int r = 0; r != rows; ++r){
        int c = 0;
        //invariant: we have written c characters so far in the current row
        while(c != cols){
               //are we on the border
                cout << "+";
                ++c;
        }
        cout << endl;
    }
    cout << endl;
    rows = 5;
    for (int r = 0; r != rows; ++r){
        int c = 0;
        //invariant: we have written c characters so far in the current row
        while(c != cols){
               //are we on the border
                if(r == 0 || r == rows - 1 || c == 0 || c == cols-1)
                    cout << "+";
                else cout << " ";
                ++c;
        }
        cout << endl;
    }
    cout << endl;
    for(int r = 12; r > 0; r--){
        for(int c = 0; c < 12; c++){
            if((r==1 && c>0) || (c==11 && r<12) || r==c) cout << "+";
            else cout << " ";
        }
        cout << endl;
    }
    return 0;
}