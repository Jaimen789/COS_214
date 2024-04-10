#include<iostream>
using namespace std;

int main ( )
{
    int a ;
    double* b = new double ;
    int c [10] ; //change to int
    long const n = 20;
    int d [n] ;
    const int  *e = ( const int*) 522; // take out e pointer


    void* f = ( void*)0xacfe2675;


    char g = 2 ; // char g error
    const int h = 0; //error 1 null should be 0

    //cout << "WORKS" << endl ;
    c [10] = 522 ; //take out pointers and dereferencing
    //cout << "sEG FAULT" << endl ;

    //cout << c [10] << endl ;

    return 0 ;
    
    
}
