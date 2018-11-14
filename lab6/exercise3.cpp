//Finian BRADWELL 16306561
#include <iomanip>
#include <iostream>
#include <cmath>
#include <vector>
#include <sstream>
using namespace std;
int main(){

    //read in max value
    double maxNum;
    cin >> maxNum;

    //convert max value to string
    string strMaxNum;
    stringstream ss;
    ss << maxNum;
    strMaxNum = ss.str();

    //square max value
    double maxNumSq = pow(maxNum,2);
    //convert squared value to string
    string strMaxNumSq;
    stringstream ss1;
    ss1 << maxNumSq;
    strMaxNumSq = ss1.str();

    //define the width between the columns to be equal to the combined length of the max value and its square
    int width = strMaxNum.size() + strMaxNumSq.size() + 1;
    for(double i = 0; i < maxNum; i+=0.01){
        cout << fixed << setprecision(2) << i << setw(width) << pow(i,2) << endl;
    }

}