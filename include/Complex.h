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
    void operator += (float rhs);
    void operator += (Complex rhs);
    void operator -= (float rhs);
    void operator -= (Complex rhs);
    bool operator == (Complex other) const;
    bool operator == (double other) const;
    bool operator == (Complex other);
    bool operator == (double other);
    bool operator != (Complex other) const;
    bool operator != (Complex other);
    Complex operator /= (float div);
    Complex operator /= (Complex div);
    Complex operator * (Complex div);
    Complex operator / (Complex div);
    Complex operator - (Complex div);
    Complex operator + (Complex div);
    void operator *= (Complex rhs);
    void operator *= (float rhs);
    friend Complex cos(Complex ang);
    friend Complex sin(Complex num);

    /**
     * Returns the real part of comlpex number
     * @param com The complex function to find the real part of
     * @return complex.real
     * @author Jackson Edwards
     */
    friend double real(Complex);
    /**
     * Returns the imaginary part of complex number
     * @param com The complex function to find the real part of
     * @return complex.imaginary
     * @author Jackson Edwards
     */
      friend double imag(Complex);
  
  
  
  
  
      //------------------------------------- ARITHMETIC LIBRARY FUNCTIONS -------------------------------------------

    /**
     * Returns the absolute value (sqrt(a^2+b^2)) of com
     * @param com the complex number to find the absolute value of
     * @return the absolute value of com
     * @author Jackson
     */
    friend double abs(Complex c);
    /**
     * Returns the angle arctan(b/a) of com
     * @param com the complex number to find the angle of
     * @return the angle of com
     * @author Jackson
     */
    friend double arg(Complex c);

    /*
    * returns the complex conjugate (a - bi) of com
    * @param com the complex number to find the conjugate of
    * @return the conjugate of com
    * @author Addy
    */
public:
      friend Complex conj(Complex com);
    /*
    * returns the norm (a^2 + b^2) of com
    * @param com the complex number to find the norm of
    * @return the norm of com
    * @author Addy
    */
      friend double norm(Complex com);

    /*
    * returns the natural logarithm of a complex number
    * @param com the complex number to find the natural logarithm of
    * @return the natural logarithm of com
    * @author Addy
    */
      friend Complex log(Complex com);

    /*
    * returns the square root of a complex number
    * @param num the complex number to find the square root of
    * @return the square root of num
    * @author Tate Smith
    */
      friend Complex sqrt(Complex num);


    //overloading insertion
    friend ostream& operator<< (ostream& in, Complex toprint);
}; 

    /*
    *Creates a complex number from a magnitude and angle
    *@author Addy
    */
      Complex polar(double mag, double ang);

#endif
