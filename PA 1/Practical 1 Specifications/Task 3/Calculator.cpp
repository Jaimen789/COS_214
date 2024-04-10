#include <iostream>
#include "Calculator.h"
using namespace std;

template<typename T>
class Calculator{
    private:
        T num1;
        T num2;

    public:
        Calculator(T num1, T num2){
            this->num1 = num1;
            this->num2 = num2;
        }

        T add(){return num1 + num2;}
        T subtract(){return num1 - num2;}
        T multiply(){return num1 * num2;}
        T divide(){return num1 / num2;}

};

int main(){
    Calculator<int> calc(741, 13);
    cout << calc.divide() << endl;


    cout << "////////////////////////////////////////////////////"<< endl;

    Calculator<double> calc2(127.58, 54.971);
    cout << calc2.add() << endl;
    // cout << calc.subtract() << endl;
    // cout << calc.multiply() << endl;
    //cout << calc2.divide() << endl;

    cout << "////////////////////////////////////////////////////"<< endl;

    // ((Hello * World) + (!))
    //create  varible
    string str1;
    string str2;

    Calculator<string> calc4("Hello", "World"); //create calculator object
    str1 = calc4.add(); //multiply the two strings
    cout << str1 << endl;
    Calculator<string> calc5(str1, "!"); //create calculator object
    str2 = calc5.add(); //add the two strings
    cout << str2 << endl;
    //cout << calc4.multiply() << endl;

    cout << "////////////////////////////////////////////////////"<< endl;
    
    


    return 0;
}