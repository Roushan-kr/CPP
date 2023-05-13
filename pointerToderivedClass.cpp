# include<iostream>
using namespace std;

class Base{
    public:
    int var1;
    void display(){
        cout<<"value of base class var is: "<<var1<<endl;
        
    }
};
class Drived: public Base{
    public:
    int var2;
    void display(){ // yha abigous result overwrite kai keran nahi aya
        cout<<"value of Derived class var is: "<<var2<<endl;
        cout<<"value of base class var under derived class is: "<<var1<<endl;

    }

};


int main(){
    Base *ptr_base_class;
    Base obj_base_class;
    Drived *ptr_derived_class;
    Drived obj_derived_class;

    // when we point a pointer of base class to derived class object
    // *ptr_base_class = &obj_derived_class;  // through error
    ptr_base_class = &obj_derived_class;  // leagel for c++ and use to create associated class type object

    // joki pointer is of base class then it run only base class function  this is known as late buinding
    ptr_base_class->var1=12;
    ptr_base_class->display();
    ptr_base_class->var1=122; // value can be reinitilised;
    ptr_base_class->display();

    //  but we are not able to do this 
    // ptr_base_class->display(); //want to get result by derived member function
    // ptr_base_class->var2=15;
// pointer jis class ka hai usi class ka function acess keraga jo ki inherated hua hai until addons issi ko late buinding khna

    //  now for Acesssing derived unit you may use pointer to derived class 
    ptr_derived_class=&obj_derived_class;

    // ptr_derived_class->var1=15; // if i did not initilised it then it sometimes get other privous decleared value from other.
    ptr_derived_class->var2=16;
    ptr_derived_class->display();
// it contain both runtime and compile time polymorphism respictily according to compiler and human;

    cout<< endl;
return 0;
}