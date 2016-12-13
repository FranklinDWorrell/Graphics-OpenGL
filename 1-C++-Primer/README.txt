To compile, use Makefile. The executable will be call TestRunner. 

This was the first assignment in the course. Its goal was to establish competency
in C++. There is an implementation of complex and real numbers, with overloaded
operator. There was a bonus using inheritance to improve code reuse. Turns out 
that in this instance, there was not much room for code reuse. Since 
ComplexNumber and RealNumber both have real number parts, ComplexNumber can 
inherit from RealNumber. In this situation, only one getter method and one 
private instance variable are actually inherited. The constructors of 
ComplexNumber are shortened, but only by one line. Instead of using inheritance, 
I would recommend using compositionality. If a ComplexNumber HAD A RealNumber 
instead of BEING A RealNumber, it could then use the operators overloaded in 
RealNumber to perform arithmetic on its RealNumber parts. This seems like a 
better design strategy than inheritance in this case. Additionally, at a 
conceptual level, having a real number part is not the same as being a real 
number--indeed, the imaginary part implies that a ComplexNumber is not a 
RealNumber. Nonetheless, the code is preserved as submitted for the course--for
posterity, of course. 

Franklin D. Worrell
13 December 2016
