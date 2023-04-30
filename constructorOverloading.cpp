#include <iostream>
using namespace std;
//  A class can hold multiple construcotr by using constructor overloading
class complex
{
    int a=0, b=0;

public:
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    complex(int x)
    {
        a = x;
        // b = 0; // it also take take value from it default 
    }
    complex(){
        a=0;
        b=0;
    }
    void printVal()
    {
        cout << "Given no is: " << a << " + " << b << "i" << endl;
    }
};

class simple {
    int data1,data2,data3;
    public: 
        simple(int a=0,int b=0, int c=0){
            data1=a;
            data2=b;
            data3=c;
        }
        void printData();

};
void simple::printData(){
    cout<<"The value of Input Data is: "<<data1<<", "<<data2<<", "<<data3<<endl;
}
int main()
{

    complex c1(1, 2), c2(1), c3;
    c1.printVal(); // constt. with multi preimeterized argument
    c2.printVal(); // constructor overloading  with single argument
    c3.printVal(); // default constt. with no arument 


    cout << endl;               // 1.5 just promoted to int 
    simple s1=simple(1),s2(1,2),s3(1.5,2,3); // constt. with default argument 
    // s1=simple(1,2);  // we can't do like this it just call and try to impliment value to this 
    s1.printData();
    s2.printData();
    s3.printData();
    return 0;
}