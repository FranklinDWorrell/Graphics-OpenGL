#ifndef REALNUMBERTEST_H
#define REALNUMBERTEST_H

#include "RealNumber.h"
#include "ComplexNumber.h" 

/**
 * Declares a set of test functions for class RealNumber. 
 * Each test fuction prints the confirmed outcome when successful
 * and prints the expected and actual outcome values when tests 
 * are failed. 
 *
 * @author	Franklin D. Worrell
 * @version	8 September 2016
 */ 

void testGetA(float expected, RealNumber& num); 
void testEquals(bool expected, RealNumber& num1, RealNumber& num2); 
void testAdd(RealNumber& expected, RealNumber& num1, RealNumber& num2);
void testAdd(ComplexNumber& expected, RealNumber& real, ComplexNumber& complex);  
void testSubtract(RealNumber& expected, RealNumber& num1, RealNumber& num2); 
void testSubtract(ComplexNumber& expected, RealNumber& real, ComplexNumber& complex); 
void testMultiply(RealNumber& expected, RealNumber& num1, RealNumber& num2); 
void testMultiply(ComplexNumber& expected, RealNumber& real, ComplexNumber& complex); 
void testDivide(RealNumber& expected, RealNumber& num1, RealNumber& num2); 
void testDivide(ComplexNumber& expected, RealNumber& real, ComplexNumber& complex); 

#endif
