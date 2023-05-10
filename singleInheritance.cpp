#include <iostream>
using namespace std;

class base
{
    int data1;

public:
    int data2;
    getdata(int a, int b)
    {
        data1 = a;
        data2 = b;
    };
    getdata1()
    {
        return data1;
    }
    // getdata2(){
    //     return data2;
    // }
};
class drived : public base
{
    int data3;

public:
    void process();
    void display();
};

void drived::process()
{
    data3 = data2 * getdata1();
}
void drived::display()
{
    cout << "The value of dtat1: " << getdata1() << ", The value of dtat2: " << data2 << ", The value of dtat3: " << data3 << ".\n";
}

class base2
{
    int data1;

public:
    int data2;
    getdata(int a, int b)
    {
        data1 = a;
        data2 = b;
    };
    getdata1()
    {
        return data1;
    }
    // getdata2(){
    //     return data2;
    // }
};

class drived2 : private base
{
    int data3;

public:
    void process();
    void display();
};

void drived2::process()
{
    getdata(1, 3);
    data3 = data2 * getdata1();
}
void drived2::display()
{
    cout << "The value of dtat1: " << getdata1() << ", The value of dtat2: " << data2 << ", The value of dtat3: " << data3 << ".\n";
}

int main()
{
    // drived der;
    // der.getdata(1,2);
    // der.process();
    // der.display();
    // cout << endl;

    drived2 der2;
    der2.process();
    der2.display();
    return 0;
    
    //  I did not able to initilize data1 only
}
