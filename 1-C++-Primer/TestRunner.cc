#include "ComplexNumber.h"
#include "RealNumber.h"
#include "ComplexNumberTest.h" 
#include "RealNumberTest.h"
#include <iostream>

using namespace std; 

/**
 * Runs tests on ComplexNumber by making use of the methods 
 * of ComplexNumberTest. Initializes text fixture and uses
 * it for all tests. 
 * @param	argc	the number of command line arguments
 * @param	argv	the command line arguments
 * @return	the exit status of the program
 */ 
int main(int argc, char* argv[]) {
    /* Create test fixture. */
    
    /* ComplexNumber instances for test fixture. */ 
    ComplexNumber num1 = ComplexNumber(1.0, 1.0); 		// Positive parts.
    ComplexNumber num2 = ComplexNumber(5.5, 0.0); 		// No imaginary part.  
    ComplexNumber num3 = ComplexNumber(12.3, 7.76); 	// Positive parts. 
    ComplexNumber num4 = ComplexNumber(-27.1, -101.4); 	// Mixing positive and
    ComplexNumber num5 = ComplexNumber(55.47, -43.9); 	// negative values for
    ComplexNumber num6 = ComplexNumber(-13.8, 2.2); 	// different parts. 
    ComplexNumber num7 = ComplexNumber(); 				// Zero. 
    
    /* RealNumber instances for test fixture. */ 
    RealNumber real1 = RealNumber(-111.1); 	// Large negative number.
    RealNumber real2 = RealNumber(56.7); 	// Large-ish positive number.
    RealNumber real3 = RealNumber(); 		// Zero.
    RealNumber real4 = RealNumber(1.0); 	// One. 
    RealNumber real5 = RealNumber(-1.0); 	// Negative one. 
    RealNumber real6 = RealNumber(0.017); 	// Small decimal value. 
    
    /* Test getA() method of ComplexNumber. */ 
    cout << "Complex.getA() tests: " << endl; 
    testGetA(1.0, num1); 
    testGetA(5.5, num2); 
    testGetA(12.3, num3); 
    testGetA(-27.1, num4); 
    testGetA(55.47, num5); 
    testGetA(-13.8, num6); 
    testGetA(0.0, num7); 
    cout << endl; // skip a line for pretty input
    
    /* Test getB() method of ComplexNumber. */ 
    cout << "Complex.getB() tests: " << endl; 
    testGetB(1.0, num1); 
    testGetB(0.0, num2); 
    testGetB(7.76, num3); 
    testGetB(-101.4, num4); 
    testGetB(-43.9, num5); 
    testGetB(2.2, num6); 
    testGetB(0.0, num7); 
    cout << endl; // skip a line for pretty input
    
    /* Test getA() method of RealNumber. */ 
    cout << "Real.getA() tests: " << endl; 
    testGetA(-111.1, real1);
    testGetA(56.7, real2); 
    testGetA(0.0, real3); 
    testGetA(1.0, real4); 
    testGetA(-1.0, real5); 
    testGetA(0.017, real6); 
    cout << endl; // skip a line for pretty input
    
    /* Test equals operator of ComplexNumber. */ 
    cout << "Complex Equality Tests: " << endl; 
    ComplexNumber equalTestCase = ComplexNumber(12.3, 7.76); 
    testEquals(true, num1, num1); 
    testEquals(false, num1, num2); 
    testEquals(false, num6, num5); 
    testEquals(true, num4, num4); 
    testEquals(false, num7, num3); 
    testEquals(true, equalTestCase, num3); // ensure addresses aren't being compared
    cout << endl; // skip a line for pretty output
    
    /* Test equals operator of RealNumber. */ 
    cout << "Real Equality Tests: " << endl; 
    RealNumber equalTestReal = RealNumber(-111.1); 
    testEquals(false, real4, real5); 
    testEquals(true, equalTestReal, real1); // ensure addresses aren't being compared
    testEquals(true, real6, real6); 
    testEquals(true, real2, real2); 
    testEquals(false, equalTestReal, real3); 
    testEquals(false, real3, real6); 
    cout << endl; // skip a line for pretty output
    
    /* Test addition of two ComplexNumbers. */ 
    cout << "Complex + Complex Tests: " << endl; 
    ComplexNumber addResult1 = ComplexNumber(6.5, 1.0); 
    testAdd(addResult1, num1, num2); // (5.5 + 0i) + (1 + i) 
    testAdd(addResult1, num2, num1); // ensure addition is commutative 
	ComplexNumber addResult2 = ComplexNumber(55.47, -43.9); 
    testAdd(addResult2, num7, num5); 
    ComplexNumber addResult3 = ComplexNumber(-40.9, -99.2); 
    testAdd(addResult3, num4, num6); 
    testAdd(num3, num3, num7); 
    ComplexNumber addResult4 = ComplexNumber(-12.8, 3.2); 
    testAdd(addResult4, num6, num1); 
    cout << endl; // skip a line for pretty output 
    
    /* Test addition of a RealNumber to a ComplexNumber. */ 
    cout << "Complex + Real Tests: " << endl; 
    ComplexNumber mAdd1 = ComplexNumber(5.517, 0.0); 
    testAdd(mAdd1, num2, real6); 
    ComplexNumber mAdd2 = ComplexNumber(69, 7.76); 
    testAdd(mAdd2, num3, real2); 
    ComplexNumber mAdd3 = ComplexNumber(54.47, -43.9); 
    testAdd(mAdd3, num5, real5); 
    ComplexNumber mAdd4 = ComplexNumber(-138.2, -101.4); 
    testAdd(mAdd4, num4, real1); 
    ComplexNumber mAdd5 = ComplexNumber(-12.8, 2.2); 
    testAdd(mAdd5, num6, real4); 
    ComplexNumber mAdd6 = ComplexNumber(0.0, 0.0); 
    testAdd(mAdd6, num7, real3); 
    cout << endl; // skip a line for pretty output
    
    /* Test addition of two RealNumbers. */ 
    cout << "Real + Real Tests: " << endl; 
    RealNumber rAdd1 = RealNumber(-111.083); 
    testAdd(rAdd1, real1, real6); 
    RealNumber rAdd2 = RealNumber(56.7); 
    testAdd(rAdd2, real2, real3); 
    RealNumber rAdd3 = RealNumber(0.0); 
    testAdd(rAdd3, real4, real5); 
    RealNumber rAdd4 = RealNumber(-112.1); 
    testAdd(rAdd4, real5, real1); 
    RealNumber rAdd5 = RealNumber(0.034); 
    testAdd(rAdd5, real6, real6); 
    RealNumber rAdd6 = RealNumber(1.0); 
    testAdd(rAdd6, real3, real4); 
    cout << endl; // skip a line for pretty output
    
    /* Test addition of a ComplexNumber to a RealNumber. */ 
    cout << "Real + Complex Tests: " << endl; 
    ComplexNumber m2Add1 = ComplexNumber(5.517, 0.0); 
    testAdd(mAdd1, real6, num2); 
    ComplexNumber m2Add2 = ComplexNumber(69, 7.76); 
    testAdd(mAdd2, real2, num3); 
    ComplexNumber m2Add3 = ComplexNumber(54.47, -43.9); 
    testAdd(mAdd3, real5, num5); 
    ComplexNumber m2Add4 = ComplexNumber(-138.2, -101.4); 
    testAdd(mAdd4, real1, num4); 
    ComplexNumber m2Add5 = ComplexNumber(-12.8, 2.2); 
    testAdd(mAdd5, real4, num6); 
    ComplexNumber m2Add6 = ComplexNumber(0.0, 0.0); 
    testAdd(mAdd6, real3, num7); 
    cout << endl; // skip a line for pretty output
    
    /* Test subtraction of two ComplexNumbers. */ 
    cout << "Complex - Complex Tests: " << endl; 
    ComplexNumber subResult1 = ComplexNumber(4.5, -1.0); 
    testSubtract(subResult1, num2, num1); // (5.5 + 0i) - (1 + i)
    ComplexNumber subResult2 = ComplexNumber(-26.1, -5.56); 
    testSubtract(subResult2, num6, num3); // (-13.8 + 2.2i) - (12.3 + 7.76i)
    testSubtract(num5, num5, num7); // (55.47 + -43.9i) - 0
    ComplexNumber subResult3 = ComplexNumber(-13.3, -103.6); 
    testSubtract(subResult3, num4, num6); 
    ComplexNumber subResult4 = ComplexNumber(49.97, -43.9); 
    testSubtract(subResult4, num5, num2); 
    ComplexNumber subResult5 = ComplexNumber(-12.3, -7.76); 
    testSubtract(subResult5, num7, num3); 
    cout << endl; // skip a line for pretty output
    
    /* Test subtraction of RealNumber from ComplexNumber. */ 
    cout << "Complex - Real Tests: " << endl; 
    ComplexNumber mSub1 = ComplexNumber(1.0, 0.0); 
    testSubtract(mSub1, num7, real5); 
    ComplexNumber mSub2 = ComplexNumber(166.57, -43.9); 
    testSubtract(mSub2, num5, real1); 
    ComplexNumber mSub3 = ComplexNumber(-13.817, 2.2); 
    testSubtract(mSub3, num6, real6); 
    ComplexNumber mSub4 = ComplexNumber(11.3, 7.76); 
    testSubtract(mSub4, num3, real4); 
    ComplexNumber mSub5 = ComplexNumber(0.0, 1.0); 
    testSubtract(mSub5, num1, real4); 
    ComplexNumber mSub6 = ComplexNumber(-27.1, -101.4); 
    testSubtract(mSub6, num4, real3); 
    cout << endl; // skip a line for pretty output
    
    /* Test subtraction with two RealNumbers. */ 
    cout << "Real - Real Tests: " << endl; 
    RealNumber rSub1 = RealNumber(-111.1); 
    testSubtract(rSub1, real1, real3); 
    RealNumber rSub2 = RealNumber(2.0); 
    testSubtract(rSub2, real4, real5); 
    RealNumber rSub3 = RealNumber(-56.683); 
    testSubtract(rSub3, real6, real2); 
    RealNumber rSub4 = RealNumber(-56.7); 
    testSubtract(rSub4, real3, real2); 
    RealNumber rSub5 = RealNumber(111.117); 
    testSubtract(rSub5, real6, real1); 
    RealNumber rSub6= RealNumber(-2.0); 
    testSubtract(rSub6, real5, real4); 
    cout << endl; // skip a line for pretty output
    
    /* Test subtraction of ComplexNumber from RealNumber. */ 
    cout << "Real - Complex Tests: " << endl; 
    ComplexNumber m2Sub1 = ComplexNumber(-1.0, 0.0); 
    testSubtract(m2Sub1, real5, num7); 
    ComplexNumber m2Sub2 = ComplexNumber(-166.57, 43.9); 
    testSubtract(m2Sub2, real1, num5); 
    ComplexNumber m2Sub3 = ComplexNumber(13.817, -2.2); 
    testSubtract(m2Sub3, real6, num6); 
    ComplexNumber m2Sub4 = ComplexNumber(-11.3, -7.76); 
    testSubtract(m2Sub4, real4, num3); 
    ComplexNumber m2Sub5 = ComplexNumber(0.0, -1.0); 
    testSubtract(m2Sub5, real4, num1); 
    ComplexNumber m2Sub6 = ComplexNumber(27.1, 101.4); 
    testSubtract(m2Sub6, real3, num4); 
    cout << endl; 

    /* Test multiplication of two ComplexNumbers. */ 
    cout << "Complex * Complex Tests: " << endl; 
    ComplexNumber multResult1 = ComplexNumber(305.085, -241.45); 
    testMultiply(multResult1, num2, num5); // forced tolerance revision. 
	ComplexNumber multResult2 = ComplexNumber(4.54, 20.06); 
	testMultiply(multResult2, num3, num1); 
	ComplexNumber multResult3 = ComplexNumber(-668.906, 727.854); 
	testMultiply(multResult3, num6, num5); 
	ComplexNumber multResult4 = ComplexNumber(91.0724, 190.896); 
	testMultiply(multResult4, num3, num3); // forced tolerance revision. 
	ComplexNumber multResult5 = ComplexNumber(0, 0); 
	testMultiply(multResult5, num7, num4); 
	ComplexNumber multResult6 = ComplexNumber(5.5, 5.5); 
	testMultiply(multResult6, num2, num1); 
    cout << endl; // skip a line for pretty output
    
    /* Test multiplication of ComplexNumber by RealNumber. */ 
    cout << "Complex * Real Tests: " << endl; 
    ComplexNumber mMult1 = ComplexNumber(0.0, 0.0); 
    testMultiply(mMult1, num3, real3); 
    ComplexNumber mMult2 = ComplexNumber(-1366.53, -862.136); 
    testMultiply(mMult2, num3, real1); 
    ComplexNumber mMult3 = ComplexNumber(-0.4607, -1.7238); 
    testMultiply(mMult3, num4, real6); 
    ComplexNumber mMult4 = ComplexNumber(-13.8, 2.2); 
    testMultiply(mMult4, num6, real4); 
    ComplexNumber mMult5 = ComplexNumber(13.8, -2.2); 
    testMultiply(mMult5, num6, real5); 
    ComplexNumber mMult6 = ComplexNumber(0.0, 0.0); 
    testMultiply(mMult6, num7, real2); 
    cout << endl; // skip a line for pretty output 
    
    /* Test multiplication of two RealNumbers. */ 
    cout << "Real * Real Tests: " << endl; 
    RealNumber rMult1 = RealNumber(0.0); 
    testMultiply(rMult1, real3, real6); 
    RealNumber rMult2 = RealNumber(0.000289); 
    testMultiply(rMult2, real6, real6); 
    RealNumber rMult3 = RealNumber(12343.21); 
    testMultiply(rMult3, real1, real1); 
    RealNumber rMult4 = RealNumber(-56.7); 
    testMultiply(rMult4, real2, real5); 
    RealNumber rMult5 = RealNumber(0.0); 
    testMultiply(rMult5, real4, real3); 
    RealNumber rMult6 = RealNumber(-1.8887); 
    testMultiply(rMult6, real1, real6); 
    cout << endl; // skip a line for pretty output
    
    /* Test multiplication of RealNumber by ComplexNumber. */ 
    cout << "Real * Complex Tests: " << endl; 
    ComplexNumber m2Mult1 = ComplexNumber(0.0, 0.0); 
    testMultiply(m2Mult1, real3, num3); 
    ComplexNumber m2Mult2 = ComplexNumber(-1366.53, -862.136); 
    testMultiply(m2Mult2, real1, num3); 
    ComplexNumber m2Mult3 = ComplexNumber(-0.4607, -1.7238); 
    testMultiply(m2Mult3, real6, num4); 
    ComplexNumber m2Mult4 = ComplexNumber(-13.8, 2.2); 
    testMultiply(m2Mult4, real4, num6); 
    ComplexNumber m2Mult5 = ComplexNumber(13.8, -2.2); 
    testMultiply(m2Mult5, real5, num6); 
    ComplexNumber m2Mult6 = ComplexNumber(0.0, 0.0); 
    testMultiply(m2Mult6, real2, num7); 
    cout << endl; // skip a line for pretty output 
    
    /* Test division of two ComplexNumbers. */ 
    cout << "Complex / Complex Tests: " << endl; 
    ComplexNumber divResult1 = ComplexNumber(2.75, -2.75); 
    testDivide(divResult1, num2, num1); 
    ComplexNumber divResult2 = ComplexNumber(1.0, 0); 
    testDivide(divResult2, num4, num4); 
    ComplexNumber divResult3 = ComplexNumber(0, 0); 
    testDivide(divResult3, num7, num6); 
    ComplexNumber divResult4 = ComplexNumber(-4.9272727, -18.4363636); 
    testDivide(divResult4, num4, num2); 
    ComplexNumber divResult5 = ComplexNumber(-0.7817902, -0.68695206); 
    testDivide(divResult5, num3, num6); 
    ComplexNumber divResult6 = ComplexNumber(1.6151523, -4.5880961); 
    testDivide(divResult6, num5, num3); 
    cout << endl; // skip a line for pretty output
    
    /* Test division of ComplexNumber by RealNumber. */ 
    cout << "Complex / Real Tests: " << endl; 
    ComplexNumber mDiv1 = ComplexNumber(323.5294117, 0.0); 
    testDivide(mDiv1, num2, real6); 
    ComplexNumber mDiv2 = ComplexNumber(0.0, 0.0); 
    testDivide(mDiv2, num7, real2); 
    ComplexNumber mDiv3 = ComplexNumber(0.9783068, -0.7742504); 
    testDivide(mDiv3, num5, real2); 
    ComplexNumber mDiv4 = ComplexNumber(13.8, -2.2); 
    testDivide(mDiv4, num6, real5); 
    ComplexNumber mDiv5 = ComplexNumber(1.0, 1.0); 
    testDivide(mDiv5, num1, real4); 
    ComplexNumber mDiv6 = ComplexNumber(0.2439243, 0.9126912); 
    testDivide(mDiv6, num4, real1); 
	cout << endl; // skip a line for pretty output
	
	/* Test division using two RealNumbers. */ 
	cout << "Real / Real Tests: " << endl; 
	RealNumber rDiv1 = RealNumber(-1.9594356); 
	testDivide(rDiv1, real1, real2); 
	RealNumber rDiv2 = RealNumber(-0.510351); 
	testDivide(rDiv2, real2, real1); 
	RealNumber rDiv3 = RealNumber(-1.0); 
	testDivide(rDiv3, real4, real5); 
	RealNumber rDiv4 = RealNumber(0.0); 
	testDivide(rDiv4, real3, real4); 
	RealNumber rDiv5 = RealNumber(1.0); 
	testDivide(rDiv5, real5, real5); 
	RealNumber rDiv6 = RealNumber(0.00029982); 
	testDivide(rDiv6, real6, real2); 
	cout << endl; // skip a line for pretty output
	
	/* Test division of RealNumber by ComplexNumber. */ 
	cout << "Real / Complex Tests: " << endl; 
	ComplexNumber m2Div1 = ComplexNumber(0.0, 0.0); 
	testDivide(m2Div1, real3, num2); 
	ComplexNumber m2Div2 = ComplexNumber(0.0024599, -0.0092044); 
	testDivide(m2Div2, real5, num4); 
	ComplexNumber m2Div3 = ComplexNumber(-1.231525, -0.974652); 
	testDivide(m2Div3, real1, num5); 
	ComplexNumber m2Div4 = ComplexNumber(-4.006861, -0.638775); 
	testDivide(m2Div4, real2, num6); 
	ComplexNumber m2Div5 = ComplexNumber(0.0581539, -0.0366889); 
	testDivide(m2Div5, real4, num3); 
	ComplexNumber m2Div6 = ComplexNumber(0.0085, -0.0085); 
	testDivide(m2Div6, real6, num1); 
	cout << endl; // skip a line for pretty input. 
    
    return 0; 
} 
