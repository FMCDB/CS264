//Finian BRADWELL 16306561
#include <iostream>
using namespace std;
int main(){
    int s = 1;
    for(int i = 1; i < 10; i++){
        if(i%2 == 0){
            s = s*i;
        } 
    }
    cout << s << endl;
    return 0;
}