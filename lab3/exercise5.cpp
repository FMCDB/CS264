//Finian BRADWELL 16306561
#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl; using std::setprecision;
using std::vector; using std::sort; using std::streamsize; using std::string;
int main() {

    vector<int> nums;

    double x;
    while (cin >> x) nums.push_back(x);

    for(int j = 0; j < nums.size(); j++){
        for(int i = 0; i < nums.size(); i++){
            if(i != nums.size()-1 && nums[i+1] < nums[i]){
                int temp = nums[i+1];
                nums[i+1] = nums[i];
                nums[i] = temp;
            }
        }
    }
    

    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
    cout << endl;
}