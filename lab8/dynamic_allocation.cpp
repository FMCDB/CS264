#include <vector>
#include <iostream>
int main(){
    int n = 5;
    int* p = new int[n];
    std::vector<int> v(p, p+n);
    delete[] p;

    std::cout << p << std::endl;
}