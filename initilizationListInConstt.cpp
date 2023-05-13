#include <iostream>
using namespace std;

/*
Syntx for initilization list in constt.
constructor (argument-list) : initilization-section{
    assigment + other code;
}

*/

class Test
{
    int a,b; // iss kai according initilised statement list work keraga.
    // int b;
    int c;

public:
    // Test(int a1, int b1): a(a1=0), b(b1=0) // just similar to a=0, b=0; mean yha hum default value 0 dono maia pass hoga
    // Test(int a1 = 0, int b1 = 0, int c=0) : a(a1), b(b1) // just similar to a=a1, b=b1+a1;
    // Test(int a1 = 0, int b1 = 0, int c=0) : a(a1), b(a1+b1+15) // just similar to a=a1, b=b1+a1+15;
    // Test(int a1 = 0, int b1 = 0, int c=0) : a(a1), b(a1*b1) // just similar to a=a1, b=b1 * a1;
    // Test(int a1 = 0, int b1 = 0, int c=0) : a(a1), b(a1%b1) // just similar to a=a1, b=a1%b1;
    // Test(int a1 = 0, int b1 = 0, int c = 0) : a(a1), b(a + b1) // just similar to a=a1, b=a+b1 joki private hai;
    // Test(int a1 = 0, int b1 = 0, int c = 0) : b(b1 + a1), a(a+a1) 
    // b/c yha hum a initilise karnai sai phlai hi usko call kai sath intilise kar diyai iss karan yha hum a=a(garbage) + a1(also garbage)                                                      
    // So yha a(private) ka value pre-defined value kai bad initilised syntex ka value liya gya hai maybe not!!

    // Test (int i=0, int j=0 ): b(j) ,a(i+b)  // here a is getting initilise first and preseding this b got initilise, so when a is initilise the b is getting some garbage value. this sequence is check according to variable initlised  and also note that it did not take default argument until it find some function or alloction section other then default   

    Test(int a1 = 0, int b1 = 0, int c = 0) : b(b1), a(a+b1) // here same things fallow a is decleared first then b so b1 sai phlai bla a is getting garbage value.
    {

        this->c = c; // this is a pointer to this class 
        cout<<"value of a is "<<a<<endl;
        cout<<"After this \n";
        a=12;//yha dhyan dena a=a(garbage)+b1 sai yha a=12 print hoga. mean initillised syntex get it value first then this
        cout << "This is now called and ended" << endl;
    }
    void display()
    {
        cout << "The value of a is: " << a << endl;
        cout << "The value of b is: " << b << endl;
        cout << "The value of c is: " << c << endl;
    };
};
int main()
{
    Test t(12, 45);
    t.display();
    cout << endl;
    return 0;
}