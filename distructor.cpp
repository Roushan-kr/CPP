//  just opposite to constructor invoken when the block of constructor distroy
//  ysi nh ki kio argument leta hai na hi value return karta hai
//  Run by compiler implicitly (After block of exit it auto called)

#include <iostream>
using namespace std;

class num
{
    static int count;

public:
    num() // constructor is invoked
    {
        count++;
        cout << "This is a time when constructor is called for object no: " << count << endl;
    }
    ~num() // destructor is invoked
    {
        cout << "This is a time when destructor is called for object no: " << count << endl;
        count--;
    }
};
int num::count = 0;
// int num::count = 1; we can't redfine it.

int main()
{
    cout << "We are inside Main Function" << endl;
    cout << " Creating first object" << endl;
    // num n1(); is par call nahi haua
    num n1;

    {
        //  A sample Block code which Just distruct as closer of Perienticies
        cout << "We are now in block Function" << endl;
        cout << " crating two object " << endl;
        num n2, n3;
        cout << "We are now exiting block Function" << endl;
    }
    cout<<"Back to main function"<<endl;
    return 0;
}