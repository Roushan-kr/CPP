#include <iostream>
using namespace std;

// Forward Declearation
class complex;
// class complex;

class calculate
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sumRealComplex(complex, complex);
    int sumImgComplex(complex, complex);
};

class complex
{
    int a, b;
    //  Suppose we have to declear all function inside another as friend the insite of declearing one by we do    friend int calculate ::sumRealComplex(complex, complex);

    friend class calculate; // Alitere:
    // friend int calculate ::sumRealComplex(complex, complex);
    // friend int calculate ::sumImgComplex(complex, complex);

public:
    void setVal(int o1, int o2)
    {
        a = o1;
        b = o2;
    }
    void printVal(void)
    {
        cout << "vlaue of complex is: " << a << " + " << b << "i" << endl;
    }
};

int calculate::sumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
    // return (o1.b + o2.b);
}

int calculate::sumImgComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex o1, o2, o3;
    o1.setVal(1, 2);
    o1.printVal();
    o2.setVal(3, 4);
    o2.printVal();

    calculate cal;
    o3.setVal(cal.sumRealComplex(o1, o2), cal.sumImgComplex(o1, o2));
    o3.printVal();

    return 0;
}