#include <iostream>
 
using namespace std;

class A {
   public:
   	  
      A(){
      	cout << "Class A constructor called" <<endl;
      }

      ~A(){
      	cout << "Class A destructor called" <<endl;
      }
      
};


class B {
   public:
   	B(){
        cout << "Class B constructor called" << endl;
    }
      
    ~B(){
        cout << "Class B destructor called" << endl;
    }
};

class C: public A{
	public:
      C(){
      	cout << "Class C constructor called" << endl;
      }

      ~C(){
      	cout << "Class C destructor called" <<endl;
      }
    
};


class D: public A, public B {
   public:
      D(){
      	cout << "Class D constructor called" << endl;
      }

      ~D(){
      	cout << "Class D destructor called" <<endl;
      }
      
};

class E: public D{
	public:
       E(){
      	cout << "Class E constructor called" << endl;
      }

      ~E(){
      	cout << "Class E destructor called" <<endl;
      }
    

};
//When creating any derived class, when is the constructor of ClassA called?
int main(void) {
   A Rect3;
   cout<<endl;
   B Rect4;
   cout <<endl;
   // C Rect5;
   // cout<<endl;
   D Rect;
   cout << endl;
//    E Rect2;
//    cout << endl;

   return 0;
}