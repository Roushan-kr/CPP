#include <iostream>
using namespace std;

class Number
{
    int a,b;

public:
    Number(){
        a=0,b=0;
    }
    Number(int num)
    {
        a = num;
        b=0;
    }
    Number(int num, int num2)
    {
        a = num;
        b=num2;

    }
    
    // A sample user defined copy constt.
    Number(Number &obj){  // i think it just work as call by refrence
        cout<<"Copy constt. called "<<endl;
        a=obj.a;
        // b=obj.b; // if any of value is not in copy function then it return garbage value to it
    }

    void dispaly(void)
    {
        cout << "The number of the given object is: " << a << endl;
    }
    void dispaly2(void)
    {
        cout << "The number of the given object is: " << a <<" and "<<b<< endl;
    }
};

int main()
{
    Number x(1),y(1,2),z(45), z2; // joki hum yha value initilize nahi kiyai humai default constt. call karna pda
    x.dispaly();
    y.dispaly();
    z.dispaly();
    cout << endl;

    //  let suppose we need a element which just exectly resemble like any class element then we may use compiler copy constt. function or user defined copy constt. function 
    Number z1(z); // A compiler also carry default copy constt. if user not define it, compiler do their work according giving pricidence to usr defined copy constt.
    z1.dispaly2();  // here comp copy constt. invoked
    z2 =z1;
    z2=y; // ismai copy constt. call nhi hua blki iska value initilize hua 
    cout<<"is it true ";
    z2.dispaly2();  
    Number z3=z2;
    z3.dispaly();
    return 0;
}   