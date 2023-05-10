#include <iostream>
using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "How are you?\n";
    }
};
class Base2
{
    public:
    void greet()
    {
        cout << "kyesho ho app? \n";
    }
};

class derived: public Base1, public Base2{
    int a;
    public:
    void greet(){
        Base1::greet();  //ambuigity resolution
        Base2::greet();  //  it may just overwrite the privios function and  let progrgramer to handel their problem
    }

};
class c{
public:
void say(){
    cout<<"Are you There!\n";
}
};
class d:public c{
public:
void say(){
    cout<<"Are you There buddy!\n";  // This Function Is just Overwrited 
}
};
int main()
{   
    Base1 obj1;
    Base2 obj2;
    obj1.greet();
    obj2.greet();
    derived obj3;
    obj3.greet(); // return a confuusion which greet funciton is to invoked now
    cout << endl;
    d d1;
    c c1;
    c1.say();
    d1.say();

    return 0;
}
