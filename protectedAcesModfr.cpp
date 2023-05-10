#include <iostream>
using namespace std;

class Base
{
    // Private only for this class
    int a;

    // Protected let it be inhreated but not directly call in other non inhrtead function or class
protected:
    int b; // quite similar to private but it may inhreated

    // Public let it be call and fetch by all
public:
    int c;
};

class Derived : protected Base
{

};

/* Default mode is Private
For protected member:
                    Public Deerivation      Private Derivation      Protected Derivation
    Private:              N/A                     N/A                       N/A
    Protected:          Protected                Private                  Protected
    Public:              Public                  Private                  Protected
*/

int main()
{
    Base b1;
    Derived d1;

    // cout << b1.a; //private
    // cout << b1.b; // Protected
    cout << b1.c; // public
    cout << endl;
    // Nothing work
    // cout<<d1.a;
    // // cout<<d1.b;
    // cout<<d1.c;
    return 0;
}