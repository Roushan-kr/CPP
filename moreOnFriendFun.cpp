#include <iostream>
using namespace std;
class Y;

class X
{
    int data;

public:
    void setValue(int IData)
    {
        data = IData;
    }
    friend void sum(X, Y);
};
class Y
{
    int data;

public:
    void setValue(int IData)
    {
        data = IData;
    }
    friend void sum(X, Y);
};

void sum(X o1, Y o2)
{
    cout << "sum of Both Value is: " << o1.data + o2.data << endl;
}
class c2;
class c1{
    int val;
    public:
    void setval(int ivalue){
        val=ivalue;
    }
    void dispval(){
        cout<<"Input value is: "<<val<<endl;
    }
    friend void swap( c1 &, c2 &);
};
class c2{
    int val;
    public:
    void setval(int ivalue){
        val=ivalue;
    }
    void dispval(){
        cout<<"Input value is: "<<val<<endl;
    }
    // friend void swap( c1 , c2 ); // issi iss thr nahi frend function declear karna iska alag meanning hai.
    friend void swap( c1 &, c2 &);
};

//  for swaping it's value use Call by refrence
//  ydi yha refrece nahi use karai to uska copy ban jyeaga na ki swap hoga
void swap (c1 &a ,c2 &b ){
    int temp =a.val;
    a.val=b.val;
    b.val=temp;

}




int main()
{
    class X x;
    x.setValue(1);
    class Y y;
    y.setValue(2);
    sum(x,y);

    cout<<endl;

    class c1 oc1;
    class c2 oc2;
    oc1.setval(12);
    oc1.dispval();
    oc2.setval(45);
    oc2.dispval();
    swap(oc1,oc2);
    //  i can't use it like this becaude it doesnot return anythig it just print 
    // cout<<" swap value of object are: "<< oc1.dispval() <<" and "<< oc2.dispval();
    //  for this we do like this 
    cout<<" value of c1 after exchange of : ";
    oc1.dispval();
    cout<<" value of c2 after exchange of : ";
    oc2.dispval();
    cout << endl;
    return 0;
}