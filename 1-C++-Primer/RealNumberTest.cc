#include "RealNumberTest.h"
#include <iostream>
#include <string>
#include <cmath>

class RealNumber; // forward declaration of class.

using namespace std; 

/**
 * Tests the getA method of RealNumber. 
 * @param   expected    the anticipated result of the call to getA()
 * @param   num         the RealNumber whose getA() is used in the test
 */ 
void testGetA(float expected, RealNumber& num) {
    // Check anticipated value within tolerance. 
    if (fabs(expected - num.getA()) < 0.00001) {
        cout << "As expected " << num << ".getA() = " << num.getA() << endl; 
    } 

    else {
        cout << "Results of " << num << ".getA(): " << endl << "\tExpected: " << expected << endl << "\tResult: " << num.getA() << endl; 
    } 
} 


/**
 * Tests == operator as overloaded in RealNumber. 
 * @param   expected    the anticipated result of the == comparision
 * @param   num1        the first RealNumber to compare
 * @param   num2        the second RealNumber to compare
 */ 
void testEquals(bool expected, RealNumber& num1, RealNumber& num2) {
    // Check anticipated value against result of == comparision. 
    if (expected == (num1 == num2)) {
        cout << "As expected " << num1 << " == " << num2 << " is " << (num1 == num2) << ". " << endl; 
    } 
    
    else {
        cout << "Results of " << num1 << " == " << num2 << ": "<< endl << "\tExpected: " << expected << endl << "\tResult: " << (num1 == num2) << endl;
    } 
}


/**
 * Tests + operator as overloaded in RealNumber. 
 * @param   expected    the anticipated sum 
 * @param   num1        the first addend
 * @param   num2        the second addend
 */ 
void testAdd(RealNumber& expected, RealNumber& num1, RealNumber& num2) {
    // Add the two ComplexNumbers together. 
    RealNumber sum = num1 + num2; 
    
    // Compare the sum vs. the expected value. 
    if (expected == sum) {
        cout << "As expected " << num1 << " + " << num2 << " = " << sum << ". " << endl; 
    } 
    
    else {
        cout << "Results of " << num1 << " + " << num2 << ": "<< endl << "\tExpected: " << expected << endl << "\tResult: " << sum << endl;
    } 
}


/**
 * Tests + operater as overloaded to add a ComplexNumber to a RealNumber.
 * @param	expected	the anticapted ComplexNumber sum
 * @param	real		the RealNumber addend
 * @param	complex		the ComplexNumber addend
 */ 
void testAdd(ComplexNumber& expected, RealNumber& real, ComplexNumber& complex) {
	ComplexNumber sum = real + complex; 
	
	// Compare the sum vs. the expected value.
	if (sum == expected) {
        cout << "As expected " << real << " + " << complex << " = " << sum << ". " << endl; 
    } 
    
    else {
        cout << "Results of " << real << " + " << complex << ": "<< endl << "\tExpected: " << expected << endl << "\tResult: " << sum << endl;
    } 
} 


/**
 * Tests - operator as overloaded in RealNumber. 
 * @param   expected    the anticipated difference 
 * @param   num1        the minuend
 * @param   num2        the subtrahend
 */ 
void testSubtract(RealNumber& expected, RealNumber& num1, RealNumber& num2) { 
    // Calculate the difference of the two ComplexNumbers. 
    RealNumber difference = num1 - num2; 
    
    // Compare the difference vs. the expected value. 
    if (expected == difference) {
        cout << "As expected " << num1 << " - " << num2 << " = " << difference << ". " << endl;
    } 
    
    else {
        cout << "Results of " << num1 << " - " << num2 << ": " << endl << "\tExpected: " << expected << endl << "\tResult: " << difference << endl; 
    } 
}


/**
 * Tests - operator as overloaded to subtract a ComplexNumber from a 
 * RealNumber. 
 * @param	expected	the anticipated ComplexNumber difference
 * @param	real		the RealNumber minuend
 * @param	complex		the ComplexNumber subtrahend
 */ 
void testSubtract(ComplexNumber& expected, RealNumber& real, ComplexNumber& complex) {
    ComplexNumber difference = real - complex; 
    
    // Compare the difference vs. the expected value. 
    if (expected == difference) {
        cout << "As expected " << real << " - " << complex << " = " << difference << ". " << endl;
    } 
    
    else {
        cout << "Results of " << real << " - " << complex << ": " << endl << "\tExpected: " << expected << endl << "\tResult: " << difference << endl; 
    } 
}


/**
 * Tests * operator as overloaded in RealNumber. 
 * @param   expected    the anticipated product 
 * @param   num1        the first factor
 * @param   num2        the second factor
 */ 
void testMultiply(RealNumber& expected, RealNumber& num1, RealNumber& num2) {
    // Calculate the product of the two ComplexNumbers. 
    RealNumber product = num1 * num2; 
    
    // Compare the product vs. the expected value. 
    if (expected == product) {
        cout << "As expected " << num1 << " * " << num2 << " = " << product << ". " << endl;
    } 
    
    else {
        cout << "Results of " << num1 << " * " << num2 << ": " << endl << "\tExpected: " << expected << endl << "\tResult: " << product << endl; 
    } 
} 


/**
 * Tests * operator as overloaded to multiply a ComplexNumber by a 
 * RealNumber. 
 * @param   expected    the anticipated ComplexNumber product 
 * @param	real	 	the RealNumber factor
 * @param   complex     the ComplexNumber factor
 */ 
void testMultiply(ComplexNumber& expected, RealNumber& real, ComplexNumber& complex) { 
    ComplexNumber product = real * complex; 
    
    // Compare the product vs. the expected value. 
    if (expected == product) {
        cout << "As expected " << real << " * " << complex << " = " << product << ". " << endl;
    } 
    
    else {
        cout << "Results of " << real << " * " << complex << ": " << endl << "\tExpected: " << expected << endl << "\tResult: " << product << endl; 
    } 
}


/**
 * Tests / operator as overloaded in RealNumber. 
 * @param   expected    the anticipated quotient 
 * @param   num1        the dividend
 * @param   num2        the divisor
 */ 
void testDivide(RealNumber& expected, RealNumber& num1, RealNumber& num2) {
    // Calculate quotient of division. 
    RealNumber quotient = num1 / num2; 
    
    // Compare quotient vs. the expected value. 
    if (expected == quotient) {
        cout << "As expected " << num1 << " / " << num2 << " = " << quotient << ". " << endl;
    } 
    
    else {
        cout << "Results of " << num1 << " / " << num2 << ": " << endl << "\tExpected: " << expected << endl << "\tResult: " << quotient << endl; 
    } 
} 


/**
 * Tests / operator as overloaded to divide a RealNumber by a 
 * ComplexNumber. 
 * @param   expected    the anticipated ComplexNumber quotient 
 * @param   real 	 	the RealNumber dividend
 * @param   complex     the ComplexNumber divisor
 */ 
void testDivide(ComplexNumber& expected, RealNumber& real, ComplexNumber& complex) {
    // Calculate quotient of division. 
    ComplexNumber quotient = real / complex; 
    
    // Compare quotient vs. the expected value. 
    if (expected == quotient) {
        cout << "As expected " << real << " / " << complex << " = " << quotient << ". " << endl;
    } 
    
    else {
        cout << "Results of " << real << " / " << complex << ": " << endl << "\tExpected: " << expected << endl << "\tResult: " << quotient << endl; 
    } 
} 
