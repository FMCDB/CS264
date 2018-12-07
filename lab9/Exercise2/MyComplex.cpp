#include "MyComplex.h"
#include <iostream>
using std::cout; using std::endl;

MyComplex::MyComplex(){
    this->a = 0;
    this->b = 0;
}

MyComplex::MyComplex(double a, double b){
    this->a = a;
    this->b = b;
}

double MyComplex::getReal(){
    return this->a;
}

void MyComplex::setReal(double a){
    this->a = a;
}

double MyComplex::getImag(){
    return this->b;
}

void MyComplex::setImag(double b){
    this->b = b;
}

void MyComplex::print(){
    cout << this->a << " + " << this->b << "i" << endl;
}

MyComplex MyComplex::operator+(const MyComplex &z){
    MyComplex newComplex;
    newComplex.setReal(a + z.a);
    newComplex.setImag(b + z.b);
    return newComplex; 
}

MyComplex MyComplex::operator-(const MyComplex &z){
    MyComplex newComplex;
    newComplex.setReal(a - z.a);
    newComplex.setImag(b - z.b);
    return newComplex; 
}

MyComplex MyComplex::operator*(const MyComplex &z){
    MyComplex newComplex;
    newComplex.setReal((a*z.a) + (b*z.b*-1));
    newComplex.setImag((a*z.b) + (b*z.a));
    return newComplex; 
}

int main(){
    MyComplex c1(4,5);
    MyComplex c2(1,7);

    c1.setReal(3);
    c1.setImag(2);

    cout << "c1" << endl;
    cout << "Real: " << c1.getReal() << " ";
    cout << "Imaginary: " << c1.getImag() << " ";
    cout << "Full: "; 
    c1.print();
    cout << endl;

    MyComplex c3 = c1 + c2;
    cout << "c1 + c2 = "; c3.print();   

    MyComplex c4 = c1 - c2;
    cout << "c1 - c2 = "; c4.print(); 

    MyComplex c5 = c1 * c2;
    cout << "c1 * c2 = "; c5.print();   
}