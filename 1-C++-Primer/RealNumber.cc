#include "RealNumber.h" 
#include "ComplexNumber.h"
#include <cmath>

/**
 * Initializes RealNumber to zero.
 */ 
RealNumber::RealNumber() {
    a = 0.0; 
} 

/**
 * Initializes RealNumber to provided value.
 * @param   _number     the value of the RealNumber
 */ 
RealNumber::RealNumber(float _a) {
    a = _a; 
} 

/**
 * Creates a new RealNumber that is a copy of the provided one.
 * @param   _rhs    the RealNumber to be copied
 */ 
RealNumber::RealNumber(const RealNumber& _rhs) {
    a = _rhs.a; 
} 

/**
 * Compare two RealNumbers for equality. Because floating point
 * numbers are involved, a tolerance value must be used, here 0.00005. 
 * @param   otherNumber     the RealNumber being compared with this
 * @return  whether the RealNumbers are equal
 */ 
bool RealNumber::operator== (const RealNumber& otherNumber) const {
    // Define equality in terms of a tolerance value. 
    if (fabs(a - otherNumber.a) < 0.00005) {
        return true; 
    } 
    else {
        return false; 
    } 
}  

/**
 * Overloads + operator to add two RealNumbers. 
 * @param	otherNumber		the other RealNumber addend 
 * @return	a new RealNumber sum
 */ 
RealNumber RealNumber::operator+ (const RealNumber& otherNumber) {
	return RealNumber(a + otherNumber.a);
} 

/**
 * Overloads the - operator to subtract a RealNumber from a 
 * RealNumber.
 * @param	otherNumber		the subtrahend
 * @return	the RealNumber difference
 */ 
RealNumber RealNumber::operator- (const RealNumber& otherNumber) {
	return RealNumber(a - otherNumber.a); 
} 

/**
 * Overloads the * operator to multiply two RealNumbers.
 * @param	otherNumber		the other factor
 * @return	the RealNumber product
 */ 
RealNumber RealNumber::operator* (const RealNumber& otherNumber) {
	return RealNumber(a * otherNumber.a);
} 

/**
 * Overloads the / operator to divide this by another RealNumber.
 * @param	otherNumber		the divisor
 * @require	(otherNumber.getNumber() != 0)
 * @return	the RealNumber quotient
 */ 
RealNumber RealNumber::operator/ (const RealNumber& otherNumber) {
	return RealNumber(a / otherNumber.a); 
} 

/**
 * Overloads + operator to add a ComplexNumber to this. 
 * @param	otherNumber		the ComplexNumber addend 
 * @return	a new ComplexNumber that is the sum
 */ 
ComplexNumber RealNumber::operator+ (const ComplexNumber& otherNumber) {
	return ComplexNumber((a + otherNumber.getA()), otherNumber.getB()); 
} 

/**
 * Overloads the - operator to subtract a ComplexNumber from this.
 * @param	otherNumber		the ComplexNumber subtrahend
 * @return	the ComplexNumber difference
 */ 
ComplexNumber RealNumber::operator- (const ComplexNumber& otherNumber) {
    return ComplexNumber((a - otherNumber.getA()), (0 - otherNumber.getB())); 
} 

/**
 * Overloads the * operator to multiply this by a ComplexNumber.
 * @param	otherNumber		the ComplexNumber factor
 * @return	the ComplexNumber product
 */ 
ComplexNumber RealNumber::operator* (const ComplexNumber& otherNumber) {
	return ComplexNumber((a * otherNumber.getA()), (a * otherNumber.getB()));  
} 

/**
 * Overloads the / operator to divide this by a ComplexNumber.
 * @param	otherNumber		the ComplexNumber divisor
 * @require	(otherNumber.getA() + otherNumber.getB()) != 0
 * @return	the ComplexNumber quotient
 */ 
ComplexNumber RealNumber::operator/ (const ComplexNumber& otherNumber) {
    ComplexNumber realAsComplex = ComplexNumber(a, 0); 
    return realAsComplex / otherNumber;
} 

/**
 * Returns the proper representation of a RealNumber for output.
 * @param   os  the output stream being used
 * @param   s   the RealNumber being passed to the output stream
 * @return  the output stream including the representation of the RealNumber
 */ 
ostream& operator<<(ostream& os, const RealNumber& s) {
    os << s.getA(); 
    return os; 
} 
