#ifndef REALNUMBER_H
#define REALNUMBER_H

#include <iostream> 

class ComplexNumber; // forward declaration of class

using namespace std; 

/**
 * Defines a class to model a real number. Real numbers contain
 * a float instance variable that is the real number's value. Default
 * copy, and single-argument constructors are implemented, as are 
 * overloads for arithmetic operators, including equality checking. 
 * Furthermore, << is overloaded to permit proper display of a 
 * RealNumber. 
 *
 * @author 	Franklin D. Worrell
 * @version	8 September 2016
 */ 
class RealNumber {
    public: 
        RealNumber(); 
        RealNumber(float _a); 
        RealNumber(const RealNumber& _rhs); 
        
        /* Overload operators for calculations with RealNumbers. */  
        RealNumber operator+ (const RealNumber& otherNumber); 
        RealNumber operator- (const RealNumber& otherNumber); 
        RealNumber operator* (const RealNumber& otherNumber); 
        RealNumber operator/ (const RealNumber& otherNumber); 
        
        /* Overloaded operators for dealing with ComplexNumbers. */ 
        ComplexNumber operator+ (const ComplexNumber& otherNumber); 
        ComplexNumber operator- (const ComplexNumber& otherNumber); 
        ComplexNumber operator* (const ComplexNumber& otherNumber); 
        ComplexNumber operator/ (const ComplexNumber& otherNumber); 
        
        bool operator== (const RealNumber& otherNumber) const; 

        /**
         * Returns the real part of this.
         * @return  the real part of the number
         */ 
        float getA() const {return a;} 

    private: 
        float a; 
}; 

ostream& operator<<(ostream& os, const RealNumber& s); 

#endif
