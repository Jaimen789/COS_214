#ifndef Calculator_h
#define Calculator_h

#include "Calculator.h"

using namespace std;

template<typename T>

class Calculator{
    private:
        T num1;
        T num2;
        
    public:
        Calculator(T num1, T num2);
        
        T add();
        T subtract();
        T multiply();
        T divide();
        
};

#endif