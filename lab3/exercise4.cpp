//Finian BRADWELL 16306561
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::setprecision; using std::string; using std::streamsize;
int main(){
    cout << "Please enter your midterm and final exam grades: ";
    double midterm, final;
    cin >> midterm >> final;
    cout << "Enter all your homework grades followed by end-of-file: ";
    // the number and sum of grades read so far
    int count = 0;
    double sum = 0;
    double x;
    //invariant: we have read count grades so far and sum is the sum of the first count grades
    while (cin >> x){
        ++count;
        sum += x;
    }
    if(count == 0){
        cout << "You must enter at least one homework grade in order to successfully compute the average." << endl;
        return 0;
    }
    //write the result
    streamsize prec = cout.precision();
    if(count > 3) cout << "Your final grade is " << setprecision(3) << 0.2 * midterm + 0.4 * final + 0.4 * sum / count << setprecision(prec) << endl;
    else cout << "Your final grade is " << setprecision(3) << 0.4 * midterm + 0.6 * final << endl;

    return 0;
}