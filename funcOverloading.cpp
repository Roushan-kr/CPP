#include <iostream>
using namespace std;

// overloading mean kisi bhi ak chej ko multiple kam mai use krna
//  c++ also support polymorphysm
//  polymorphysm mean ak hi chej kai alag alg use ho allg alag roop ho

int add(int a, int b)
{
    cout<<"used first one\n";
    return a + b;
}
int add(int a, int b, int c)
{
    cout<<"used secound one\n";
    return a + b+c;
}

float volume(double r, int h){
    return 3.14*r*r*h;
}
int volume(int a){
    return a*a*a;
}
int volume ( int l, int b, int h){
    return l*b*h;
}

int main()
{
    //  compiler first match prototype 
    // ydi match nhi kiya to datatype ka promotion bhi kyea jyega 
    cout<<"The sum of 3 and 4 is  "<<add(3,4)<<endl; //jhaa return kerga whi kai lyai line print ho unless funnction ststement going to print and perform

    cout<<"The sum of 3 ,2 and 4 is  "<<add(3,2,4)<<endl;
     cout<<endl;
     cout<<endl;
    //  here you can see function overloading 
    cout<<"volume of cube of side 12 is "<< volume(12)<<endl;
    cout<<"volume of cylinder of hight 12, radii 5 is "<< volume(5.2,12)<<endl;
    cout<<"volume of cubiod of side 12,13,14 is "<< volume(12,13,14)<<endl;

    return 0;
}