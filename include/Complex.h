/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : Complex
Author : _________
URL : NA
Description : The complex class for complex numbers, and the functions that can be used upon them
Created : _______
Modified : _______
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#ifndef COMPLASA_H
#define COMPLASA_H

#include <iostream>
//#include <complex>

using namespace std;

class Complex {

    //----------------------------------------- OPERATOR OVERLOADS -----------------------------------------------------
    public: double r;
    double i;

    Complex();
    Complex(double r, double i);

    Complex operator += (float rhs);

    Complex operator /= (float div);
    Complex operator /= (Complex div);


    /**
     * Returns the real part of comlpex number
     * @param com The complex number to find the real part of
     * @return complex.real
     * @author ___________
     */
    friend double real(Complex);
    /**
     * Returns the imaginary part of complex number
     * @param com The complex number to find the real part of
     * @return complex.imaginary
     * @author _________
     */
      friend double imag(Complex);
  
  
      
  
  
      //------------------------------------- ARITHMETIC LIBRARY FUNCTIONS -------------------------------------------

    /**
     * Returns the absolute value (sqrt(a^2+b^2)) of com
     * @param com the complex number to find the absolute value of
     * @return the absolute value of com
     * @author ____________
     */
    friend double abs(Complex);

    /*
    * returns the complex conjugate (a - bi) of com
    */
    friend Complex conj(Complex);
    /*
    * returns the norm (a^2 + b^2) of com
    */
    friend double norm(Complex);
  


    //overloading insertion
    friend ostream& operator<< (ostream& in, Complex& toprint);

  
}; // Complex class declaration
#endif
