#include <iostream>
using namespace std;

//  this pointer use when:
// 1. when func variable name and class var name repete twice then for acessing class var use this->class_var_name = local var
// 2. it also use to retuen a object from a function
// 3. you may think it as a class pointer
//         4. it represent the object joki member functiono ko invoke kerta hai
//         5. this is a keyword which is a pointer which point to the object which invoke the member function

class A
{
    int a; // class variable
public:
    void setData(int a)
    {                                   // explicitly call of this keyword other wise we call it implicitly
        this->a = a;                    // yha humai local value ka presidence jda honai kai karan hmai this ka use kerna pda
        cout << "I am called and set\n"; // we are able to assign a=a1 by using c simple nature in other function
    }
    //   call by value and returnig the object which invoke this function
    // A &retuenObj()
    A retuenObj() // call by refrence
    {
        cout << "Hey i retun you somthings \n";
        return *this;
    }
    void display()
    {
        cout << "Value of a is: " << a << endl;
    }
};
int main()
{
    A a;
    a.setData(12);
    a.display();
    A b = a.retuenObj();
    // b.setData(15);
    b.display();
    a.retuenObj().display();
    // yha a.returnobj() replaced by object refrence jis par hum futher obj functon invoke kar satai hai
    cout << endl;
    return 0;
}