//
//  main.cpp
//  fushuzhihe
//
//  Created by 20141105044y on 15/11/25.
//  Copyright © 2015年 20141105044y. All rights reserved.
//

#include <iostream>
using namespace std;
class Complex
{public:
    Complex(){real=0;imag=0;}
    Complex(double r,double i){real=r;imag=i;}
    double get_real();
    double get_imag();
    void display();
private:
    double real;
    double imag;
};

double Complex::get_real()
{return real;}

double Complex::get_imag()
{return imag;}

void Complex::display()
{cout<<"{"<<real<<","<<imag<<"i)"<<endl;}

Complex operator+(Complex &c1,Complex &c2)
{
    return Complex(c1.get_real()+c2.get_real(),c1.get_imag()+c2.get_imag());
}

int main()
{Complex c1(-5,-4),c2(10,24),c3;
    c3=c1+c2;
    cout<<"c3=";
    c3.display();

    return 0;
}
