# include<iostream>
using namespace std;

class Employee{
    int id;
    int salary;

    public:
        void setId(void){
            salary=122;
            cout<<"Enter the Id of Employe :"<<endl;
            cin>>id;
        }
        void getId(void){
            cout<<"The id of Employe is "<<id<<" And salary is : "<<salary<<endl;
        }
};

class complex {
    int a,b;

    public:
        void setdata(int p1, int p2){
            a=p1; // p1 is passed value by object 
            b=p2;
        }
        void setdataBySum( complex o1, complex o2){
            a=o2.a +o1.a; // o1 is obj1 .a is vlaue of that object 
            b=o2.b +o1.b;
        }
        void printNumber(){
            cout<<"Complex no is :"<<a<<" + ("<<b<<"i)"<<endl;
        }
};

int main(){
//  One of way to declear and use 

    // Employee rj, sahil, aryan;
    // rj.setId();
    // rj.getId();

//  And other way is :
int size;
cout<<" Enter the Size of company "<<endl;
cin>>size;
    Employee mCName[size];

for (int i = 0; i < size; i++)
{
    mCName[i].setId();
    mCName[i].getId();
}

    cout<<endl ;
cout<<sizeof(mCName[size]);
    cout<<endl ;


//  Our Driver Program
complex c1, c2, c3;
// c1,c2 give value and c3 use to store it 

c1.setdata(1,2);
c1.printNumber();
c2.setdata(3,-4);
c2.printNumber();
//  Passing object as function argument 
c3.setdataBySum(c1,c2); // insted of giving datatype we give object 
cout<<"Sum of both ";
c3.printNumber();




return 0;
}

// Note:-
    //  we not only pass value of well known datatype, we also pass object to a functon
    // 