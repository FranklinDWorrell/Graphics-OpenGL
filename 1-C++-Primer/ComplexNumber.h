#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H

#include <iostream> 
#include "RealNumber.h"

class RealNumber; // forward declaration of class

using namespace std; 

/**
 * Defines a class representing a complex number. Complex numbers
 * have both a real and an imaginary part. Besides default, copy, 
 * and two-argument constructors, the class also requires overloads
 * of the standard arithmetic operators, including equality checks.
 * Additionally, outside of the class, the << operator is overloaded
 * to ensure that instances of ComplexNumber are printed in a 
 * sensical way. 
 *
 * In this implementation, ComplexNumber is a subclass of RealNumber.
 * Hence, it inherits its real part and the respective getter method
 * from class RealNumber. Constructors call the relevant constructor
 * from RealNumber to initialize real part. 
 *
 * @author	Franklin D. Worrell
 * @version	8 September 2016
 */ 
class ComplexNumber : public RealNumber {
    public: 
        ComplexNumber(); 
        ComplexNumber(float _a, float _b); 
        ComplexNumber(const ComplexNumber& _rhs); 

		/* Overloads for operations on two ComplexNumbers. */ 
        ComplexNumber operator+ (const ComplexNumber& otherNumber); 
        ComplexNumber operator- (const ComplexNumber& otherNumber); 
        ComplexNumber operator* (const ComplexNumber& otherNumber); 
        ComplexNumber operator/ (const ComplexNumber& otherNumber); 
        
		/* Overloads for operations on a ComplexNumber and a RealNumber. */ 
        ComplexNumber operator+ (const RealNumber& otherNumber); 
        ComplexNumber operator- (const RealNumber& otherNumber); 
        ComplexNumber operator* (const RealNumber& otherNumber); 
        ComplexNumber operator/ (const RealNumber& otherNumber); 

        bool operator== (const ComplexNumber& otherNumber) const; 
              
        /**
         * Returns the imaginary part of this.
         * @return  this.b
         */ 
        float getB() const {return b;} 

    private: 
        float b; // the imaginary part of the ComplexNumber
}; 

ostream& operator<<(ostream& os, const ComplexNumber& s); 

#endif
