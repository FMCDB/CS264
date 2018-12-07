#include <iostream>
#include <math.h>

class MyComplex{
    public:
        MyComplex(); // Defult Constructor
        MyComplex(double a, double b);
        double getReal();
        void setReal(double);
        double getImag();
        void setImag(double);
        void print();

        MyComplex operator+(const MyComplex &z);
        MyComplex operator-(const MyComplex &z);
        MyComplex operator*(const MyComplex &z);

    protected:
        double a, b;
};



