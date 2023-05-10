//  Inheritance In CPP
//  Reusability is important In OOPs and we can reuse a class and add aditional features to it. use DRY Principle to save time and money(In cost of Debugging).
//  usi resuability ka concept Inheritance kai form mai use hoga.
//  Existing cass called as Base class and inherited class ko Derived class
//  types:-  1. Multilevel Inheritance (Drive class sai Drive class sai base class) 2. Hierarchical Inheritance (Multi Drived class using single Base class) 3. Hybride Inheritance (Multiple + MultiLevel, however one of the parent class in not a base class) 4. Multiple Inheritance (Multi Base class + extended data) 5. Single Inheritance (Extend by Base + More)
//  The Inheritance value may be private, public, and protected

/* NOW CODE TIME*/

#include <iostream>
using namespace std;
//  Base Class
class Employe
{
    int id;
    float salary;

public:
    int cId;
    Employe()
    {
        cout << "default constt." << endl;
    }
    Employe(int inpid)
    {
        id = inpid;
        salary = 122.02;
        cId = 1;
    }
    void display()
    {
        cout << "Employe id: " << id << ", salary: " << salary << ".\n";
    }
    ~Employe(){
        cout<<"Time come then i go, but now time is"<<endl;
    }
};

//  Note:-
//      1. even a class is inherated from a base class it is able to acess public function and data only but it not able to acess it private value.
//      2. if i  did not define it visibility it default private.
//      3. public visibility:  base ka public member drived ka bhi public member.
//      4. private visibility: base ka public member drived ka private member.
//      5. protected visibility: base ka public iska 

//  derived class syntex
/* class {{drived-class-name}} : {{visibility}} {{Base-class-name}} // {{}} --> iska mtlb replacable value
{
    class member/method/etc...
}
*/

//  Creating a drived class " programmer " from base class " Employe "
//  visibility mode Inheritance ka hai
class programmer : private Employe
{
    //  Employe ka public iska bhi private
public:
    int languageKnow = 9;
    programmer(int inpuid)
    {
        cId = inpuid;
    }
    void display2()
    {
        cout << "Employe cId: " << cId << ", languageKnow: " << languageKnow << ".\n";
        // joki yai Inherited hai Employe class sai iss karan it try to call Employe default constt.
        // Employe(3); // is this try to say i am not able to access base private member.
        display();
    }
    ~programmer(){
        cout<<" gone"<<endl;
    }
};

int main()
{

    Employe rj(1), shail(2);
    rj.display();
    shail.display();
    cout << "let me think" << endl;
    programmer rj2(1); // yha Employe class ka default constt. call hoga
    cout << "let me think again" << endl;

    // rj2.display(); //  is not an accessible b/c it's private nature
    rj2.display2();
    cout<<"i am in b/t"<<endl;
    rj2.display2();
    cout << endl;
    {
        cout << "let me think" << endl;
        programmer rj3(2); // yha Employe class ka default constt. call hoga
        cout << "let me think again" << endl;
        rj3.display2();
    }
    // rj3.display2(); // now it not in scope
    return 0;
}

// i may have a question phlai employer distroy hua then programmer ya ulta. i think ulta