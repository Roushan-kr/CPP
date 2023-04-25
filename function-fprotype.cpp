#include<iostream>
using namespace std;

int sum( int a, int b){
    // here a,b are formal perimeter
    // int c=a+b;
    return a+b;
}
int sub(int b, int a); // yha ulta likhai hu. sath hi issi bhi int sub(int, int) work same
// issi ko prototyping khtai hai c++ mai c sai phlai prototyping aya bad mai c adopt keya 
// syntex type finction_name ( arguments)
// use to give program functoin assurity to find not gurienty

void g();

//  call by value
void swap(int c, int d){
    int temp=c;
    c=d;
    d=temp; // you know upto this, this will not swap these number to actual argument 

}
// so here we need somthing which use it addresh to do application

// call by refrence using pointer

void swapPointer(int *c, int *d){  // void swapref(int &a, int&b) then yha humai kebal value pass kerna perga inpalce of addresh
    int temp=*c;
    *c=*d;
    *d=temp;
}
void swapref(int &a, int &b){
    int temp=b;
    b=a;
    a=temp;
}

// return by refrence  // thora confusion hai
int &returnRef(int &a, int &b){
    int temp=b;
    b=a;
    a=temp;
    return b; // yha jo value return kerganai whi actual variable mai jo value as a refrence parse hua tha usi mai modification kai sath return hoga 
}
int main(){

//  function paly a segnificent role in top-down structured programing language

    int num1, num2; //actual perimeter
    cout<<"Enter the value of first number "<<endl;
    cin>>num1; 
    cout<<"Enter the value of secound number "<<endl;
    cin>>num2; 
    // cout<< " The sum of both number is "<<sum(num1, num2)<<endl;
    // cout<< " The sub of both number is "<<sub(num1, num2)<<endl;
    // // cout<< " The swap of both number is "<< swap(num1, num2)<<endl;
    // cout<< " The swap of both number is " <<num1<<num2<<endl;
    // swap(num1,num2); // this will not work b/c of local and not parrsing value by this void method 
    // cout<< " The swap of both number is " <<num1<<num2<<endl;
    // swapPointer(&num1,&num2); // work because work in call by refrence 
    // cout<< " The Actual swap of both number is " <<num1<<num2<<endl;
    // swapref(num1,num2); // work because work in call by refrence without using pointer 
    // cout<< " The swapref of both number is " <<num1<<num2<<endl;
    
    returnRef(num1,num2)=12;
    cout<<"value of num1 is "<<num1<<"value of num2 is "<<num2<<endl;

    // g();

return 0;
}

int sub( int a, int b){
    // int c=a+b;
        // here a,b are formal perimeter

    return a-b;
}
void g(){
    cout<<"\nhello world i am ___"<<endl;
}