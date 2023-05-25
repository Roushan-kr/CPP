#include <iostream>
using namespace std;

template <class T>
class rj
{
    T data;

public:
    rj(T a)
    {
        data = a;
    }
    void display();
    // void display(){
    //     cout<<data<<endl;
    // }
};
// use to declear a function outside the class
template <class T>
void rj<T>::display()
{
    cout << data << endl;
}

// When we over load a function then compiler tryes first to call actual function then dataType promotion then callinf a template function
// E.g.

void func(int a)
{
    cout << "I am the first one " << endl;
    cout << "My value is: " << a << endl;
}

template <class T>
void func(T a)
{
    cout << "I am the Secound one " << endl;
    cout << "My value is: " << a << endl;
}
template <class T>
void func1(T a)
{
    cout << "I am the Secound one " << endl;
    cout << "My value is: " << a << endl;
}
int main()
{

    rj<int> r(45);
    r.display();

    rj<float> r2(45.4f);
    r2.display();

    rj<char> r3('5');
    r3.display();

    rj<string> r4("45");
    r4.display();

    func(45);            // here the actual perimeter and arguement matches  // excact match have hi
    func("This is me!"); // Now 2nd one run 
    func1(15);  // function name matched 
    cout << endl;
    return 0;
}