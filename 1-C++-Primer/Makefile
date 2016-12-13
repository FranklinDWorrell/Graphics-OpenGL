CC=g++
LDFLAGS=-lstdc++
TARGETS=TestRunner

all: $(TARGETS) 

$(TARGETS): TestRunner.o ComplexNumberTest.o ComplexNumber.o RealNumberTest.o RealNumber.o
	$(CC) TestRunner.o ComplexNumber.o RealNumber.o ComplexNumberTest.o RealNumberTest.o $(LDFLAGS) -o TestRunner 
    
RealNumber.o: RealNumber.cc
	$(CC) -c RealNumber.cc $(LDFLAGS)

ComplexNumber.o: ComplexNumber.cc
	$(CC) -c ComplexNumber.cc $(LDFLAGS)
    
RealNumberTest.o: RealNumberTest.cc
	$(CC) -c RealNumberTest.cc $(LDFLAGS) 

ComplexNumberTest.o: ComplexNumberTest.cc
	$(CC) -c ComplexNumberTest.cc $(LDFLAGS) 
    
TestRunner.o: TestRunner.cc
	$(CC) -c TestRunner.cc $(LDFLAGS) 

clean: 
	rm -f *.o *.h.gch TestRunner
