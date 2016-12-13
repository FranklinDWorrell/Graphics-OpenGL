#ifndef COMPLEXNUMBERTEST_H
#define COMPLEXNUMBERTEST_H

#include "ComplexNumber.h"
#include "RealNumber.h"

/**
 * Declares a set of test functions for class ComplexNumber. 
 * Each test fuction prints the confirmed outcome when successful
 * and prints the expected and actual outcome values when tests 
 * are failed. 
 *
 * @author	Franklin D. Worrell
 * @version	8 September 2016
 */ 

void testGetA(float expected, ComplexNumber& num); 
void testGetB(float expected, ComplexNumber& num); 
void testEquals(bool expected, ComplexNumber& num1, ComplexNumber& num2); 
void testAdd(ComplexNumber& expected, ComplexNumber& num1, ComplexNumber& num2);
void testAdd(ComplexNumber& expected, ComplexNumber& complex, RealNumber& real);  
void testSubtract(ComplexNumber& expected, ComplexNumber& num1, ComplexNumber& num2); 
void testSubtract(ComplexNumber& expected, ComplexNumber& complex, RealNumber& real); 
void testMultiply(ComplexNumber& expected, ComplexNumber& num1, ComplexNumber& num2); 
void testMultiply(ComplexNumber& expected, ComplexNumber& complex, RealNumber& real); 
void testDivide(ComplexNumber& expected, ComplexNumber& num1, ComplexNumber& num2); 
void testDivide(ComplexNumber& expected, ComplexNumber& complex, RealNumber& real); 

#endif
