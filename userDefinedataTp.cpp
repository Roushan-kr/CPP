# include<iostream>
using namespace std;

//  typedef struct employee
// {
//     /* data */
//     int id; //4
//     char favch;  //1
//     float salary; //4 it consume total 9 byte of datasize total when it called 
// } emp;
// union currency
// {
//     /* data */
//     int inr; //4 byte space consume by this UDefDateType
//     char name;  //1
//     float usd; //4
//     int s[12];
// };

int main(){

//      typedef struct employee
// {
//     /* data */
//     int id;
//     char favch;
//     float salary;
// } emp;

// struct employee rj;
// struct employee jhon;
// emp sahil;
// rj.id =2;
// rj.favch ='k';
// rj.salary = 15220000000.23;
// sahil.id =1;
// sahil.favch ='a';
// sahil.salary = 1500.23;

// cout<<rj.salary<<endl;
// cout<<rj.favch<<endl;
// cout<<rj.id<<endl;
// cout<<sahil.salary<<endl;
// cout<<sahil.favch<<endl;
// cout<<sahil.id<<endl;

// union currency c1,c2;
// c1.inr =45;
// cout<<"value of this c1.inr "<<c1.inr<<endl;
// c1.name ='i';
// cout<<"value of this c1.inr "<<c1.name<<endl;
// c1.usd =44;
// cout<<"value of this c1.inr "<<c1.usd<<endl;
// cout<<"value of this c1.inr "<<c1.inr<<endl; // return garbage value because another one is used above
// int a = 12;
// c1.s[0]=a;  // i need more idea about this, this is on hold now
// cout<<"value of this c1.s[0] "<<c1.s<<endl;


// enum is just like a array not ajjectlyl which get value according to thir declaration place
enum testCase { case1, case2, case3};
            //  0,      1,     2   assign value according to mention value going case
    // cout<<case1<<endl;
    // cout<<case2<<endl;
    // cout<<case3<<endl;

    testCase m1 =case1;
    cout<<(m1==1); //check the condition and return value 
 cout<<sizeof(m1);




return 0;
}