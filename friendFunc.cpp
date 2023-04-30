# include<iostream>
// # include "arrayOfObj.cpp" i can't use it b/c of main privously defined their
using namespace std;

class complex {
    int a,b;
    friend complex sumComplex (complex o1, complex o2); // able to asses private data(member) only
    public:
    friend complex sumComplex (complex o1, complex o2); // work anywhere in this called class 
        void setNumber(int p1, int p2){
            a=p1;
            b=p2;
        }
        void printNumber(){
            cout<<"complex no is : "<<a<<" + "<<b<<"i"<<endl;
        }
};
//  this trated as forigon function
// it can't assess value if it doesnot decleard as a friend function( with limited permission)
//  it only able to assess data and its value only 
complex sumComplex( complex o1, complex o2) 
{
    complex o3;
    o3.setNumber( (o1.a+o2.a), (o1.b+o2.b));
    cout<<"Sum of Both ";
    o3.printNumber();
    // cout<<c2.a<<endl; // not able to assess
}

int main(){
    complex c1,c2,c3;
    c1.setNumber(1,2);
    c1.printNumber();

    c2.setNumber(3,4);
    c2.printNumber();

    sumComplex(c1,c2);
    // c3.sumcomplex(c1,c2); // not able to asses b/c it is not in scope 
    //  sumComplex(); // need argumment to go


    cout<< endl;
return 0;
}

//  Property of friend function
//  1. not in the scope of class 
//  2. it cannot be called from the object of that class e.g. c1.sumComplex()== invlid b/c not in scope
//  3. can be invoke without the help of any object 
//  4. Ussualy contain the object as argument 
//  5. able to decleard inside private and public sectoion of a class
//  6. not able to assess member directly by their name need object_name.member_name to asses any member 