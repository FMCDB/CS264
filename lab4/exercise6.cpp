//Finian BRADWELL 16306561
#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    for(double i = 99; i >= -100; i-=0.01){
        cout << setw(10) << i << setw(10) << pow(i,2) << endl;
    }
}