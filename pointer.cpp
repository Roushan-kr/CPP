# include<iostream>
using namespace std;
int main(){

// pointer ---> holds the value of diffrent data type
// * ---> derefrence operator, & ---> Addresh of oprends
int a=12;
int c=a;
int *b =&c;
cout<<"value of b "<<b<<endl;
cout<<"value of &b "<<&b<<endl;
cout<<"value at b "<<*b<<endl;
cout<<"value at c "<<c<<endl;
cout<<"addresh of c "<<&c<<endl;
cout<<"value at a "<<a<<endl;
cout<<"addresh of a "<<&a<<endl;

//  pointer to pointer

int **d =&b;
cout<< " value of &d is "<<&d<<endl;
cout<< " value of d is "<<d<<endl;
cout<< " value at d is "<<*d<<endl;
cout<< " value at *d is "<<**d<<endl;







return 0;
}