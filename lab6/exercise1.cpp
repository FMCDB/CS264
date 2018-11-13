//Finian BRADWELL 16306561
#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    for(int i = 0; i < 100; i++){
        cout << setw(10) << i << setw(10) << pow(i,2) << endl;
    }
}