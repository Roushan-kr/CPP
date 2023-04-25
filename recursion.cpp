# include<iostream>
using namespace std;
// fuction which call itself

// factorial of a no.

int fact(int a)
{
    
    int b=1;
    if(a==1||a==0){
    return b;
    }

    b=a*fact(a-1);
    return b;
}

int fib(int b){
    if(b<2){
        return 1;
    }
    //  i try here also to print the sequence but here i can't find solution.
    // i think itretative approch but i don't know how to do with reccursive approch
    
    return fib(b-2)+ fib(b-1);
}

int main(){
    int a;
cout<<"Enter value of a no"<<endl;
cin>>a;
if(a<0){
       cout<<"Enter a valid argument"<<endl;
    };
cout<<"fact value of "<<a<<" is: "<<fact(a)<<endl; // pta nahi kyu laki yai code shi kam kiya 
int b;
cout <<"Enter term for value in fibonachi series : "<<endl;
cin>>b;
cout <<"The value at "<<b<<" in fibonachi series : " <<fib(b)<<endl;









return 0;
}