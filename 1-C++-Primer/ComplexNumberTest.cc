#include "ComplexNumberTest.h"
#include <iostream>
#include <string>
#include <cmath>

using namespace std; 

/**
 * Tests the getA method of ComplexNumber. 
 * @param   expected    the anticipated result of the call to getA()
 * @param   num         the ComplexNumber whose getA() is used in the test
 */ 
void testGetA(float expected, ComplexNumber& num) {
    // Check anticipated value within tolerance. 
    if (fabs(expected - num.getA()) < 0.00001) {
        cout << "As expected " << num << ".getA() = " << num.getA() << endl; 
    } 

    else {
        cout << "Results of " << num << ".getA(): " << endl << "\texpected: " << expected << endl << "\tresult: " << num.getA() << endl; 
    } 
} 


/**
 * Tests the getB method of ComplexNumber. 
 * @param   expected    the anticipated result of the call to getB()
 * @param   num         the ComplexNumber whose getB() is used in the test
 */ 
void testGetB(float expected, ComplexNumber& num) {
    // Check anticipated value within tolerance range. 
    if (fabs(expected - num.getB()) < 0.00001) {
        cout << "As expected " << num << ".getB() = " << num.getB() << endl; 
    } 

    else {
        cout << "Results of " << num << ".getB(): " << endl << "\texpected: " << expected << endl << "\tresult: " << num.getB() << endl; 
    } 
} 


/**
 * Tests == operator as overloaded in ComplexNumber. 
 * @param   expected    the anticipated result of the == comparision
 * @param   num1        the first ComplexNumber to compare
 * @param   num2        the second ComplexNumber to compare
 */ 
void testEquals(bool expected, ComplexNumber& num1, ComplexNumber& num2) {
    // Check anticipated value against result of == comparision. 
    if (expected == (num1 == num2)) {
        cout << "As expected " << num1 << " == " << num2 << " is " << (num1 == num2) << ". " << endl; 
    } 
    
    else {
        cout << "Results of " << num1 << " == " << num2 << ": "<< endl << "\tExpected: " << expected << endl << "\tResult: " << (num1 == num2) << endl;
    } 
}


/**
 * Tests + operator as overloaded in ComplexNumber. 
 * @param   expected    the anticipated sum 
 * @param   num1        the first addend
 * @param   num2        the second addend
 */ 
void testAdd(ComplexNumber& expected, ComplexNumber& num1, ComplexNumber& num2) {
    // Add the two ComplexNumbers together. 
    ComplexNumber sum = num1 + num2; 
    
    // Compare the sum vs. the expected value. 
    if (expected == sum) {
        cout << "As expected " << num1 << " + " << num2 << " = " << sum << ". " << endl; 
    } 
    
    else {
        cout << "Results of " << num1 << " + " << num2 << ": "<< endl << "\tExpected: " << expected << endl << "\tResult: " << sum << endl;
    } 
}


/**
 * Tests + operater as overloaded to add a RealNumber to a ComplexNumber.
 * @param	expected	the anticapted ComplexNumber sum
 * @param	complex		the ComplexNumber addend
 * @param	real		the RealNumber addend
 */ 
void testAdd(ComplexNumber& expected, ComplexNumber& complex, RealNumber& real) {
	ComplexNumber sum = complex + real; 
	
	// Compare the sum vs. the expected value.
	if (sum == expected) {
        cout << "As expected " << complex << " + " << real << " = " << sum << ". " << endl; 
    } 
    
    else {
        cout << "Results of " << complex << " + " << real << ": "<< endl << "\tExpected: " << expected << endl << "\tResult: " << sum << endl;
    } 
} 


/**
 * Tests - operator as overloaded in ComplexNumber. 
 * @param   expected    the anticipated difference 
 * @param   num1        the minuend
 * @param   num2        the subtrahend
 */ 
void testSubtract(ComplexNumber& expected, ComplexNumber& num1, ComplexNumber& num2) { 
    // Calculate the difference of the two ComplexNumbers. 
    ComplexNumber difference = num1 - num2; 
    
    // Compare the difference vs. the expected value. 
    if (expected == difference) {
        cout << "As expected " << num1 << " - " << num2 << " = " << difference << ". " << endl;
    } 
    
    else {
        cout << "Results of " << num1 << " - " << num2 << ": " << endl << "\tExpected: " << expected << endl << "\tResult: " << difference << endl; 
    } 
}


/**
 * Tests - operator as overloaded to subtract a RealNumber from a 
 * ComplexNumber. 
 * @param	expected	the anticipated ComplexNumber difference
 * @param	complex		the ComplexNumber minuend
 * @param	real		the RealNumber subtrahend
 */ 
void testSubtract(ComplexNumber& expected, ComplexNumber& complex, RealNumber& real) {
    ComplexNumber difference = complex - real; 
    
    // Compare the difference vs. the expected value. 
    if (expected == difference) {
        cout << "As expected " << complex << " - " << real << " = " << difference << ". " << endl;
    } 
    
    else {
        cout << "Results of " << complex << " - " << real << ": " << endl << "\tExpected: " << expected << endl << "\tResult: " << difference << endl; 
    } 
}


/**
 * Tests * operator as overloaded in ComplexNumber. 
 * @param   expected    the anticipated product 
 * @param   num1        the first factor
 * @param   num2        the second factor
 */ 
void testMultiply(ComplexNumber& expected, ComplexNumber& num1, ComplexNumber& num2) {
    // Calculate the product of the two ComplexNumbers. 
    ComplexNumber product = num1 * num2; 
    
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
 * @param	complex 	the ComplexNumber factor
 * @param   real        the RealNumber factor
 */ 
void testMultiply(ComplexNumber& expected, ComplexNumber& complex, RealNumber& real) { 
    ComplexNumber product = complex * real; 
    
    // Compare the product vs. the expected value. 
    if (expected == product) {
        cout << "As expected " << complex << " * " << real << " = " << product << ". " << endl;
    } 
    
    else {
        cout << "Results of " << complex << " * " << real << ": " << endl << "\tExpected: " << expected << endl << "\tResult: " << product << endl; 
    } 
}


/**
 * Tests / operator as overloaded in ComplexNumber. 
 * @param   expected    the anticipated quotient 
 * @param   num1        the dividend
 * @param   num2        the divisor
 */ 
void testDivide(ComplexNumber& expected, ComplexNumber& num1, ComplexNumber& num2) {
    // Calculate quotient of division. 
    ComplexNumber quotient = num1 / num2; 
    
    // Compare quotient vs. the expected value. 
    if (expected == quotient) {
        cout << "As expected " << num1 << " / " << num2 << " = " << quotient << ". " << endl;
    } 
    
    else {
        cout << "Results of " << num1 << " / " << num2 << ": " << endl << "\tExpected: " << expected << endl << "\tResult: " << quotient << endl; 
    } 
} 


/**
 * Tests / operator as overloaded to divide a ComplexNumber by a 
 * RealNumber. 
 * @param   expected    the anticipated ComplexNumber quotient 
 * @param   complex 	the ComplexNumber dividend
 * @param   real        the RealNumber divisor
 */ 
void testDivide(ComplexNumber& expected, ComplexNumber& complex, RealNumber& real) {
    // Calculate quotient of division. 
    ComplexNumber quotient = complex / real; 
    
    // Compare quotient vs. the expected value. 
    if (expected == quotient) {
        cout << "As expected " << complex << " / " << real << " = " << quotient << ". " << endl;
    } 
    
    else {
        cout << "Results of " << complex << " / " << real << ": " << endl << "\tExpected: " << expected << endl << "\tResult: " << quotient << endl; 
    } 
} 

