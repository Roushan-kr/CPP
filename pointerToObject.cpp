#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void getdata()
    {
        cout << "The real value is: " << real << endl;
        cout << "The imaginary value is: " << imaginary << endl;
    }
    Complex(int a = 0, int b = 0) : real(a), imaginary(b)
    {
        cout << "i am here \n";
    };
};

int main()
{
    Complex c(12, 13);
    c.getdata();
    cout << "\n";

    // PTC
    Complex *ptr = &c;

    // *ptr.getdata();  //error so stay safe!!
    (*ptr).getdata(); // both,yha bracket lagana important iskai presidence kai through hai
    cout << "\n";
    ptr->getdata(); // both are same

    // direct way to make a pointer with class
    // Complex *pt =  Complex(45,16); error
    Complex *pt = new Complex(45, 16);
    pt->getdata(); // derefrencing by using arrow operator.

    cout << "\n making a array using pointer for class\n";
    Complex *bck = new Complex[3]; // iss blai case mai default argument maga jikai karan humai constt. mai change kerna pda
    bck[0].getdata();  // this is already a pointer
    (bck+1)->getdata(); // this is a refrence
    bck[2].getdata();   // how i change default value 

    cout << endl;
    return 0;
}