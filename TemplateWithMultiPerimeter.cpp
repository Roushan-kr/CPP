#include <iostream>
using namespace std;

/*
syntex :-
template <class T1=int, class T2=int ...(seprated with comma)>
class vector{
T1 *arr;
T2 size;
//  other mamber and function
}

in main function:
vector <float, int, ....>v1(if constt.);--> here int(default) is overwrited by float , int

*/

template <class T1 = float, class T2 = int>
class vector
{
    T1 *arr;
    T2 size;

public:
    vector(T2 size)
    {
        this->size = size;
        arr = new T1[this->size];
    }
    void display()
    {
        for (T2 i = 0; i < this->size; i++)
        {
            cout << arr[i] << endl;
        }
    }
};

template <class T1, class T2>
class myClass
{
    T1 data1;
    T2 data2;
public:

    myClass(T1 a, T2 b)
    {
        this->data1 = a;
        this->data2 = b;
    }
    void display()
    {
        cout << this->data1 << "\n"
             << this->data2 << endl;
    }
};

//  Template with default argument 
template <class T1=int, class T2=float>
class Rj{
    T1 a;
    T2 b;
    public:
    Rj(T1 x, T2 y){
        a =x;
        b=y;
    }
    void display(){
        cout<<"Value if a is: "<<a<<endl;
        cout<<"Value if b is: "<<b<<endl;
    }
};

int
main()
{
    // vector<> v(3); // if template perimeter do not specified then it take default

    // v.display();
    myClass <int , string> a(45,"this is me! ") ;//, <float, char> b(15.5,'c'); // yai bla formet nahi kam kiya
    // a.display();
    // b.display();

    Rj <>r(15,117.3);
    r.display();
    Rj <float , int >r1(15,117.3);
    r1.display();
    cout << endl;
    return 0;
}