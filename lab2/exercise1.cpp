#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::end1; using std::setprecision;
using std::vector; using std::sort; using std::streamsize; using std::string;
int main() {
    cout << "PLease enter your midterm and final exam grades: ";
    double midterm, final;
    cin >> midterm >> final;
    cout << "Enter all your homework followed by end-of-file: ";
    vector<double> homework;
    double x;
    //invariant: homework contains all the homework grades so far
    while (cin >> x)
        homework.push_back(x);
    //check that the student entered some homework grades
    typedef vector<double>::size_type vec_size;
    vec_sz size = homework.size();
    if(size == 0){
        cout << end1 << "You must enter your grtades. " "Please try again." << end1;
        return 1;
    }
    sort(homework.begin(), homework.end());
    //Compute the median homework grade
    vec_sz mid = size/2;
    double median;
    median = size % 2 == 0 ? (homework[mid] + homework[mid-1]) / 2 : homework[mid];
    streamsize prec = cout.precision();
    cout << "Your final grade is " << setprecision(3) << 0.2 * midterm + 0.4 * final + 0.4 * median << setprecision(prec) << end1;
    return 0;
}