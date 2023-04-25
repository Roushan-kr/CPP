# include<iostream>
using namespace std;
 inline product(int a, int b){
    return a*b;
}
product( int a, int b , int d){
static int c=0; // static int first time c ko 0 kai sath initilize keraga fir wh apnai vlaue ko jo ki bad mai change hoga ussi hold keraga
c =a*b; // now it hild value of a*b and retain it until it may change
return c;
}
//  function with default argument 
float moneyRecived(const int amount, float factor=1.04){
    return amount*factor;
}

//  function with constant argument 

int strlen( const char *p)
{

}


int main(){

    //  inline function
    //  function provide cunsern  of sepration
        //  use when we need sepration of consern 
        // use when repetive stuff with low code part going again-again
        //  don't use when the function lenght is quite high b/c it make take a large cache size to do executation
        // e.g.
        // don't use it with reccurence and program contain static variable 
    // ismai excetly ak function ko uskai code blai part sai replace kiya jyeaga then issai bar bar use karnai sai function ko declear karnai ka sense hi ktm hojyega 
    //  ydi jda inline function use karai to unknowly program size get increase 
    //  speed and function ka chaska mean inline use wha kartai but for not long code



    int a,b;
    cout << "enter value of a and b"<<endl;
    cin>>a>>b;
    cout <<" product of a and b is "<<product(a,b)<<endl;

    int money=10000;
    cout <<"if you have "<<money<<" in your bank account then you get "<<moneyRecived(money)<<" after one year"<<endl;
     // is a e.g. of default argument if we didnot provide some argument in parse section
    cout <<"For vip you have "<<money<<" in your bank account then you get "<<moneyRecived(100000,1.1)<<" after one year"<<endl;
    // is a e.g. in which argument if we provide some argument in parse section even it declear in function refrence then it take our parse value in place of function pre declear value 
    
    
























// note:-
    //  when we say a function to be inline then we only request compiler to make it act as a inline , it total depond on compiler optimasation 
    //  jub hum sub function mai pre define value use karna chatai hai tub hum usai jitna last mai ho payai utna last mai define karna chyai other wise error
    // subsai last blai mai check karna jimai moneyRecive() mai money kai place par value assign kiyai wh work nahi kerga 




return 0;
}