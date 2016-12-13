#include "ComplexNumber.h"
#include <cmath>

/**
 * Default constructor initializes ComplexNumber to be equal 
 * to 0 + 0i. 
 */ 
ComplexNumber::ComplexNumber() : RealNumber() {
	b = 0.0; 
} 

/**
 * Initializes ComplexNumber to value specified in call. 
 * @param   _a      the real part
 * @param   _b      the imaginary part
 */ 
ComplexNumber::ComplexNumber(float _a, float _b) : RealNumber(_a) {
	b = _b; 
} 

/**
 * Copy constructor creates a copy of a ComplexNumber
 * @param   _rhs    reference to the ComplexNumber being copied
 */ 
ComplexNumber::ComplexNumber(const ComplexNumber& _rhs) : RealNumber(_rhs.getA()) {
	b = _rhs.b; 
} 

/**
 * Overloads + operator to add two ComplexNumbers. 
 * @param   otherNumber    the ComplexNumber addend 
 * @return  a new ComplexNumber that is the sum
 */ 
ComplexNumber ComplexNumber::operator+ (const ComplexNumber& otherNumber) {
    float newA = getA() + otherNumber.getA(); // a + c
    float newB = getB() + otherNumber.getB(); // b + d
    return ComplexNumber(newA, newB); // (a + c) + (b + d) * i
} 

/**
 * Overloads - operator to subtract two ComplexNumbers.
 * @param   otherNumber    the ComplexNumber subtrahend
 * @return  a new ComplexNumber that is the difference
 */ 
ComplexNumber ComplexNumber::operator- (const ComplexNumber& otherNumber) {
    float newA = getA() - otherNumber.getA(); // a - c
    float newB = getB() - otherNumber.getB(); // b - d 
    return ComplexNumber(newA, newB); // (a - c) + (b - d) * i
} 

/**
 * Overloads * operator to multipy two ComplexNumbers. 
 * @param   otherNumber    the other ComplexNumber factor
 * @return  a new ComplexNumber that is the product
 */ 
ComplexNumber ComplexNumber::operator* (const ComplexNumber& otherNumber) {
    float newA = (getA() * otherNumber.getA()) - (getB() * otherNumber.getB()); // ac - bd
    float newB = (getB() * otherNumber.getA()) + (getA() * otherNumber.getB()); // bc + ad
    return ComplexNumber(newA, newB); // (ac - bd) + (bc + ad) * i
} 

/**
 * Overloads / operator to divide this by a ComplexNumber.
 * @param   otherNumber    the ComplexNumber divisor
 * @require	(otherNumber.getA() != 0) || (otherNumber.getB() != 0)
 * @return  a new ComplexNumber that is the quotient
 */ 
ComplexNumber ComplexNumber::operator/ (const ComplexNumber& otherNumber) {
    float newA = ((getA() * otherNumber.getA()) + (getB() * otherNumber.getB())) / ((otherNumber.getA() * 
        otherNumber.getA()) + (otherNumber.getB() * otherNumber.getB())); // (ac + bd) / (c^2 + d^2) 
    float newB = ((getB() * otherNumber.getA()) - (getA() * otherNumber.getB())) / ((otherNumber.getA() * 
        otherNumber.getA()) + (otherNumber.getB() * otherNumber.getB()));// (bc - ad) / (c^2 + d^2) 
    return ComplexNumber(newA, newB); 
} 

/**
 * Overloads + operator to add a RealNumber to a ComplexNumber.
 * @param 	otherNumber	the RealNumber addend
 * @return	a new ComplexNumber that is the sum
 */ 
ComplexNumber ComplexNumber::operator+ (const RealNumber& otherNumber) {
    return ComplexNumber((getA() + otherNumber.getA()), getB()); 	
} 

/**
 * Overloads - operator to subtract a RealNumber from a ComplexNumber.
 * @param	otherNumber	the RealNumber subtrahend
 * @return	a new ComplexNumber that is the difference
 */ 
ComplexNumber ComplexNumber::operator- (const RealNumber& otherNumber) {
    return ComplexNumber((getA() - otherNumber.getA()), getB()); 
}

/**
 * Overloads * operator to multiply a ComplexNumber by a RealNumber.
 * @param	otherNumber	the RealNumber factor
 * @return	a new ComplexNumber that is the product
 */ 
ComplexNumber ComplexNumber::operator* (const RealNumber& otherNumber) {
    return ComplexNumber((getA() * otherNumber.getA()), (getB() * otherNumber.getA())); 
} 

/**
 * Overloads / operator to divide a ComplexNumber by a RealNumber.
 * @param	otherNumber	the RealNumber divisor 
 * @require	otherNumber.getA() != 0
 * @return	a new ComplexNumber that is the quotient
 */ 
ComplexNumber ComplexNumber::operator/ (const RealNumber& otherNumber) {
    return ComplexNumber((getA() / otherNumber.getA()), (getB() / otherNumber.getA())); 
} 

/**
 * Compare two ComplexNumbers for equality. Because floating point
 * numbers are involved, a tolerance value must be used, here 0.00005. 
 * @param   otherNumber     the ComplexNumber being compared with this
 * @return  whether the ComplexNumbers are equal
 */ 
bool ComplexNumber::operator== (const ComplexNumber& otherNumber) const {
    // Define equality in terms of a tolerance value. 
    if ((fabs(getA() - otherNumber.getA()) < 0.00005) && (fabs(getB() - otherNumber.getB()) < 0.00005)) {
        return true; 
    } 
    else {
        return false; 
    } 
} 

/**
 * Returns the proper representation of a ComplexNumber for output.
 * @param   os  the output stream being used
 * @param   s   the ComplexNumber being passed to the output stream
 * @return  the output stream including the representation of the ComplexNumber
 */ 
ostream& operator<<(ostream& os, const ComplexNumber& s) {
    os << "(" << s.getA() << " + " << s.getB() << "i)"; 
    return os; 
} 
