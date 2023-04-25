// it just work as a mid level programing concept 
// a mid level program need programmer knowlage to use memory and dynamic locaton
// while high level have it own knowlage to do, mean it is pre and better define 
// variable are container to store value
// It also provide a level of abstrction

// we have diffrent variable 

// variable and comment in c++

// # include<iostream>
// using namespace std;
// int main(){
//     // std::cout<<"hello world\n";
//     cout<<"hello world\n";
//     return 0;
// }


    /* This is 
        a
    Multiline line 
     comment*/

//  variable in c++

// primary variable(build in Date-type):-
    // int
    // float ( low decimal preision no)
    // char
    // double( high prision decimal no)
    // boolean

//  int s=34; Here "s" is a integer variable of value 34.

//  Based in scope, variable can be of two type:-
    // Local variable ( decleared under { data_type var_name = value} and asses inside it(func) only )
    // Global variable ( declear outside any function and able asses anywhere )
    // we also use name of both variable same, then local precidence is high


//  scope of variable is region where it exist or valid

//  data type define the type of data a variable can hold 

    //  Data type in c++ (3 type)
        // Build-in
        // user-defined
        // Derived

    // build in Date-type
        // int
        // float ( low decimal preision no)
        // char
        // double( high prision decimal no)
        // boolean

    //  user define dara type 
        // Struct
        // Union
        // Enum
    
    //  Derived Data-type
        // Array
        // function
        // Pointer
    
# include<iostream>
using namespace std;
int global=4;
int sum ( int a , int b){
    int c;
    c=a+b;
    return c;
    c=0; // here i did it b/c after return it value become zero not the privious one
}
int main(){
    cout<< "This ia example of Date-Type\n";
    int a=5,b=4;
    cout<<"Value of A is "<<a<<". And the value if B is "<<b<<"\n";
    float Pi=3.14;
    cout<<"Value of PI is "<<Pi<<"\n";
    //  ydi hum char c='uf'; , So debuger error dega but compiler compile it and result last one char, mean F as output
   // a= sum(a,b);
    int global =sum(a,b);
        // cout<<"\nSum of a and b is "<< sum(a ,b);
    cout<<"\nSum of a and b is "<< global; // here local impact is quit high for local global but outside this function things become normal
    // cout<<"😁";
    cout<<"\nSum of a and b  for global is "<< ::global<<endl; // here global value got seen isko scope resolution khtai hai
    // cout<<"\nValue of c is "<<c<<"\n"; // we can't use it b/c it not of local scope
    bool true_value=true;
    cout<< "Bollean value for true is "<< true_value;
    

return 0;
}
// Note :- 
//  when we write or call a variable then it first find local variable then global
// boll retun 1 for true and 0 for false

//  Rule for Declearing varible 
    // variable size range from 1 to 255 char long 
    // It can start with underscore
    // after the first initial latter, it can be latter or number
    // case-sensitive var-name
    // no space or special char or resurve keywords are allowed
    // but it is not recommended to use unwanted long var name 


// c++ Basic I/O 
    //  << is call as insertion operator 
    // >> is call as Extraction operator (i/p lai lo)




