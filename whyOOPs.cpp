// c++ designed to add Obeject -orented features to c language
// due to size of the increse , redibility, maintainbility, and bug-free nature decrease
// all this due to function and procedure to addresh and data-sec also get compromise
// using classes solve this problem

// procedural oriented programing (POP)
    //  main focus on function not on data flow
    // func may use local and global data
    // Data move openly from function to function 

// object oriented programming (OOP)
    // use concept of classs{template to crate object} and object 
    // treats data as a critual elements  
    // decompose problem in object and builds data and function around object 

//  while declearing class their where no memory taken for this , memory taken when objecct are called

//  **** Basic terminology *******
    // classes :- Basic template for creating object 
    // object :- Basic runtime entities 
    // Data abstraction(level od femtation) & Encaosulation :- wrapping data and function in to single unit 
    // Inheritance :- Property of one class can be inherited into forms
    // Polymorphism :- ability to take more then one form 
    // Dynamic Binding :- code which will be excute not known until program run
    // Massage Passing :- Object.masssage(info) call formate

//  Benifite 
    //  Better code resuality
    //  Data hanlinng Principal help to build secure system
    //  Multiple object can co-exist without any interfrence
    // softwere complixity can be easily managed


//  i think it quite similar to struct but in struct we can call these value anytime and anywhere 
//  that why we use classes in place of struct
//  and also on struct we can't insert FUNCTION INSIDE IT 

# include<iostream>
using namespace std;

class Employee {
    private:
    int salary, id, uid;

    public:
    int roomNo, deskNo;

    void setDate(int a1,int b1, int c1);  // decleared only inside this class
    void revdata(int x, int y, int z);
    void getData(){
        cout<<"The value of salary  is : "<<salary<<endl;
        cout<<"The value of id  is : "<<id<<endl;
        cout<<"The value of uid  is : "<<uid<<endl;
        cout<<"The value of roomNo  is : "<<roomNo<<endl;
        cout<<"The value of deskNo  is : "<<deskNo<<endl;
    }

}shyam , hari; // another member but not recomended


// we only inilise value by function contained by class where this function is a part 
// now inilising value mean define 
void Employee :: setDate(int a1, int b1, int c1)
{
    salary=a1;
    id=b1;
    uid=c1;
    // roomNo=45; // yha hum public class defination ko redifine kar satai hai
};
void Employee :: revdata(int x, int y, int z){
    salary=x=1500; // yha bla value na lai kar parsed value lega 
    id=y=1200;
    uid=z=1300;
    roomNo=45; // isai bhi change kar sasta hai
};


int main(){

Employee rj;
// rj.salary=1000000;  ---> return a error because it is private 
rj.deskNo=12;
rj.roomNo=13;
// rj.salary=1777777; //ydi ak private pta cha to sub private pta chal jyeaga 
// rj.noname =15; // lakin public bla mai nhi 
rj.setDate(1,2,3); // here we need it to give value unless it did not work
rj.revdata(1500,1200,1100); // high presidence
rj.getData();


    return 0;
}


// Note:-
    //  A function inside a class have capibility to assign value to private as well as public data.obj
    //  A function can't redifine more then once 
    //  Any function inside same class have capilibilty to redfine it value 
    // nedd to parse value through main function