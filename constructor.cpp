#include <iostream>
using namespace std;

//  As we know classes are custom data type
//  Constructor is a spacial member function  with the same name as of class
//  It is used to initialize the object of it's class
//  It's automatic invoked whenever an object is created
// eg.

class complex {
    int a,b;
    public:
        complex(void);         //  constructor function 

        void printNumber(void){
            cout<<" Given No is: "<<a<<" + "<<b<<"i "<<endl;
        }
};
//  constructor Initilisation
//  if constructor are of diffrent name as par class then it can't able to perform their job 
//  construction ka kio return type nahi hota. // int(return type) fun_nam ( assepted vlaue){/* code*/};
complex::complex(void){ // A type of conststructior--> This is a ( Default constructor)
    a=0;
    b=0;
    //  No return type
    // use when, what to do next when this class created in main function 
    cout<<"Hello worldssss\n";
};

int main()
{
    complex c,a;
    c.printNumber();
    a.printNumber(); // sbhi mai value initilize hoga


    cout << endl;
    return 0;
}

//  Note:-
//      1. should be decleared in public section of a class
//      2. auto invoke whenever the object is created
//      3. The can't return value and didn't have data type
//      4. This can have default argument 
//      5. We can't refres to their address !important
