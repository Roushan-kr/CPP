# include<iostream>
using namespace std;
int main(){
// A collection of similar data types in contgenous menory location

int marks[4]={23,25,34,24};
cout<<marks[0]<<endl;
cout<<marks[1]<<endl;
cout<<marks[2]<<endl;
marks[3]=45;
cout<<marks[3]<<endl;
cout<<marks[4]<<endl; //return a garbage value
// int i=0;
    // while (i<=4){
    //     cout<<"enter value of "<<i<<endl;
    //     cin>>marks[i];
    //     cout<<" value of "<< i<<"is "<<marks[i]<<endl;
    //     //4 blai input kai bad bhi garbage return keraga b/c it is not decleared
    //     i++;
    // }

// pointer with array

    // &marks is wrong 
    //  we use pointer arthematic
    // addresh+1 = addresh of first +sizeof(data type)

    int *p = marks;
        // cout<<*p++<<endl;
        // cout<<*(++p)<<endl;
        // i thick it only do refrence and derefrnce but it also hold its privious state😒
    
    cout<< "value of *p      euivalent to marks[0] "<<*p<<endl;
    cout<< "value of *(p+1)  euivalent to marks[1] "<<*(p+1)<<endl;
    cout<< "value of *(p+2)  euivalent to marks[2] "<<*(p+2)<<endl;
    cout<< "value of *(p+3)  euivalent to marks[3] "<<*(p+3)<<endl;
    cout<< "value of *(p+3)  euivalent to marks[3] "<<*p+3<<endl; // pointer ka value lai arthematic perform keraga
    cout<< "value of *(p+4)  euivalent to marks[4] "<<*(p+4)<<endl; // return garbage value




return 0;
}