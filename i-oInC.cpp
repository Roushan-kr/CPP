// In c++ sequence of bytes corresponding to i/o are commonly known as streams 
// input stream :- dirction of flow of bytes take place from inout device to main memory
// output stream :- direction of flow of date from main memory to ooutput device

# include<iostream>
using namespace std;
int main(){
   int num1, num2;
    //  << is call as insertion operator 
    // >> is call as Extraction operator (i/p lai lo)

    cout<< " Enter the value of num1"<<endl;
    // cin>>num1;

    cout<< " Enter the value of num2"<<endl;
    // cin>>num2;

    cout<<" The Sum of Given No is "<<num1+num2;
        cout<<endl;
    cout<<endl;

//  Header file and Operator 
    // type 
        //  1. System header file: comes with compiler
        //  2. User defined file: written by programer
            // usr header can included with   #include "head.h"  --> this will produce an error if this is not present in folder
// eg
// #include "head.h"
//#include <head.h> // both work

// operators i c++
    // Arthematic Operator
    int a=4,b=3;
    cout<< "\n value od a and b is "<<a <<","<<b <<endl;
    cout<<" The value of a + b is "<<a+b<<endl;
    cout<<" The value of a - b is "<<a-b<<endl;
    cout<<" The value of a * b is "<<a*b<<endl;
    cout<<" The value of a / b is "<<a/b<<endl;
    cout<<" The value of a % b is "<<a%b<<endl;
    cout<<" The value of a++ is "<<a++<<endl; //diplay a=4 --> a+=1 bad mi add hua
    cout<<" The value of a-- is "<<a--<<endl; // a=5--> a-=1 bad mai operation perform hua
    cout<<" The value of ++a is "<<++a<<endl; //a= 4+1 phlai add hua 
    cout<<" The value of --a is "<<--a<<endl; // a= 5-1 same as above
    cout<<endl;
    cout<<endl;
 

// Assignment operator  --> use to assign value to itss variable 
    //   eg in a=2, char a='c'

//  comprasion operator
//a =4, b=3
    cout<<" the value of a !=b "<< (a!=b)<<endl;
    cout<<" the value of a ==b "<< (a==b)<<endl;
    cout<<" the value of a < b "<< (a< b)<<endl;
    cout<<" the value of a >=b "<< (a>=b)<<endl;
    cout<<" the value of a <=b "<< (a<=b)<<endl;
    cout<<" the value of a >b "<< (a>b)<<endl;
    cout<<endl;
    cout<<endl;


// Logical Operator
    cout<<" the logical opeeertion between ((a>b)&&(a<b)) "<<((a>b)&&(a<b))<<endl;
    cout<<" the logical opeeertion between ((a>b)||(a>b)) "<<((a>b)||(a>b))<<endl;
    cout<<" the logical opeeertion between (!(a>b) "<<(!(a>b))<<endl;

// Bitwise operator


return 0;
}