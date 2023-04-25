#include <iostream>
#include <iomanip>
using namespace std;
int c = 49;
int main()
{
    // int a,b,c;
    // cout<< "Enter value of a"<<endl;
    // cin>>a;
    // cout<< "Enter value of b"<<endl;
    // cin>>b;
    // c = a + b;
    // cout<<" sum of c =a + b is "<<c<<endl;
    // // we call global value here
    // cout<<" sum of c for global is "<<::c<<endl;
   // float a = 23.23f; // or 23.23F syntex offer
    // in c++ default for 23.23 is double not float we can spedcify it by 23.23f for floation refrece
   // long double b = 23.23;  // her for lonfg double 23.23l

    //  iska frk function overloading mai peraga
   // cout << " value of a is " << a << endl
    //     << "value of b is " << b << endl;

// ************************* Float,  Double, long litrals****************
    //  for testing this 
        // cout<< " size for value 23.23 "<<sizeof(23.23)  <<endl;
        // cout<< " size for value 23.23f "<<sizeof(23.23f)<<endl;
        // cout<< " size for value 23.23F "<<sizeof(23.23F)<<endl;
        // cout<< " size for value 23.23l "<<sizeof(23.23l)<<endl;
        // cout<< " size for value 23.23L "<<sizeof(23.23L)<<endl;
        // cout<< " size for value 23.23d "<<sizeof(23.23d)<<endl;
        // cout<< " size for value 23.23D "<<sizeof(23.23D)<<endl;

//  ******************Refrence Varibale ***************

    // float x=12.2;
    // cout<< x<<endl;
    // float &y =x ;
    // cout<<y<<endl;


// ****************** Typecasting***************

    // int x=12;
    // cout<<" value of x is "<<(float) x; 
    // float y=12.32;
    // cout<<" \nvalue of (int)y is "<<(int)y; // both are same 
    // cout<<"\n value of int(y) is "<<int(y); // both
    // cout<<"\n value of int(y)+x is "<<int(y)+x; 
    // cout<<"\n value of (int)y+x is "<<(int)y+x; 
    // cout<<"\n value of y+x is "<<y+x; 

//  constant in c++
// const float x=12.55;
// cout<<"The value of x is "<<x;
    // x=15.23;
    // cout<<"The value of x is "<<x; // we cant do this because of const keyword

// ******* Manipulators *********
// Help us to formate data display 
// e.g endl, other from iomanip  setw

    // int a=1,b=12,c=1235;
    // cout<<"The value of a without setw is "<<a<<endl;
    // cout<<"The value of b without setw is "<<b<<endl;
    // cout<<"The value of c without setw is "<<c<<endl;
    // cout<<endl;

    // cout<<"The value of a with setw is "<<setw(4)<<a<<endl; // c mai jo %4d kai place par
    // cout<<"The value of b with setw is "<<setw(4)<<b<<endl;
    // cout<<"The value of c with setw is "<<setw(4)<<c<<endl;

// ******** operator precedence *********
    // iska mtlb which operator use first
    // Jub presedence same ho tub Associvitty dekna{ which may be from left to roght or opp.}
    // e.g. int c =((((a*5)+b)-45)+42)
    // int a=12,b=15;
    // int c=a*5+b-45+42;
    // cout<<" value of c=a*5+b-45+42 is "<<c;
    










    return 0;
}