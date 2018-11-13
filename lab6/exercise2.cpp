//Finian BRADWELL 16306561
#include <iomanip>
#include <iostream>
#include <cmath>
#include <vector>
#include <sstream>
using namespace std;
int main(){

    //read in max value
    int maxNum;
    cin >> maxNum;

    //convert max value to string
    string strMaxNum;
    stringstream ss;
    ss << maxNum;
    strMaxNum = ss.str();

    //square max value
    int maxNumSq = pow(maxNum,2);
    //convert squared value to string
    string strMaxNumSq;
    stringstream ss1;
    ss1 << maxNumSq;
    strMaxNumSq = ss1.str();

    //define the width between the columns to be equal to the combined length of the max value and its square
    int width = strMaxNum.size() + strMaxNumSq.size() + 1;
    for(int i = 0; i < maxNum; i++){
        cout << i << setw(width) << fixed << setprecision(0) << pow(i,2) << endl;
    }

}