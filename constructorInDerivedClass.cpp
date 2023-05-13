#include <iostream>
using namespace std;

// If base class already have it's constructor then no need to define it again in derived class
// It auto called by default
// If a constructor is called in derived class then we have use a proper syntex in which we have to specify which value given to base class and which for derived class  too
// If base class have not any constt. then there is no neddd to define or declear constt. in derived class

// If our base and drived both class contain constructor then base class consttructor invoked first perssiding drived class constt.😁 but if other inherited class contain virtual base class then this invoke first presiding other virtual classs then normal class according.

//  long story short:- first invoke virtal class then normal as appered
// In multilevel Inheritance as the inheritance goes down the invoking order goes same

// Special Syntex:-
// C++ supports syntex which let user to pass argument to many base class, In this driven class get all argument once and pass call to respective classes

// Ddrived-Constt (arg1, arg2, arg3 ...):Base1-constt(arg1, arg2),Base2-constt(arg3,arg4)....{
// ika apna vale/ member=arg"n";
// }

/*
case1:
class B: Public A{
    1--> A(), 2--->B() order to call a constt.
}
case2:
class B: Public A , private C , public D{
    1--> A(), 2--->C(), 3 --->D(), 4--->B() order to call a constt.
}
case3:
class B: Public A(), virtual private C,virtual private D{
    1--> C(), 2--->D(), 3--->A(), 4--->B() order to call a constt.
}


*/

class Base1
{
    int data;

public:
    Base1(int i)
    {
        data = i;
        cout << "Base1 conatt. called\n ";
    }
    void printData1()
    {
        cout << "The value of Data is " << data << endl;
    }
};
class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 conatt. called\n ";
    }
    void printData2()
    {
        cout << "The value of Data2 is " << data2 << endl;
    }
};

class Base3
{
    int data;

public:
    Base3(int i)
    {
        data = i;
        cout << "Base3 conatt. called\n ";
    }
    void printData3()
    {
        cout << "The value of Data3 is " << data << endl;
    }
};
 
class Derived : public Base1, public Base2, virtual public Base3 // yha bla keraga for ordering
{
    int drived1, drived2;

public:  // constt. mai har ak base class ko initilise kerna peraga to get initilse in this derived class 
    Derived(int a, int b, int c, int d, int e) : Base1(a), Base2(b), Base3(c) //yha bla matter nahi keraga for ordering or issi ko initilization-section khtai hai
    {
        drived1 = d;
        drived2 = e;
        cout << "Derived class constt. called"<<endl;
    }
    void prentData()
    {
        printData1();
        printData2();
        printData3();
        cout<<"value derived1 is "<<drived1<<", and derived2 is "<<drived2<<endl;
    }
};

int main()
{
    Derived rj(1,2,3,4,5);
    rj.prentData();
    cout << endl;
    return 0;
}