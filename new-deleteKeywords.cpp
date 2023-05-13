# include<iostream>
using namespace std;

// Revisiting Pointer
    // variable use to store addresh and it's pointed value
    // If stored in contiginous block then also able to do pointer arthenatics



int main(){

    int a=4;
    int* ptr =&a;

    cout<<"value of a is: "<<a<<endl;
    cout<<"value of *ptr is: "<<*ptr<<endl;
    cout<<"value of &a is: "<<&a<<endl;
    cout<<"value of ptr is: "<<ptr<<endl<<endl;

    // new keyword with dynamic allocation as operator
    int *p = new int(40);
    cout<<"value of *p is: "<<*(p)<<endl;
    cout<<"value of p is: "<<(p)<<endl<<endl;

    float *p1 = new float(40.23+12);
    cout<<"value of *p1 is: "<<*(p1)<<endl;
    cout<<"value of p1 is: "<<(p1)<<endl<<endl;

    // using array to acess continous location
    int *arr = new int[3];
    // *(arr)=12;
    // *(arr + 1)=13;
    // *(arr + 2)=14; // it also work

    arr[0]=0;
    arr[1]=1;
    arr[2]=2;
    cout<<"value at *(arr) is: "<<*(arr)<<endl;
    cout<<"value at *(arr +1) is: "<<*(arr +1)<<endl;
    cout<<"value at *(arr +2) is: "<<*(arr +2)<<endl<<endl;
// If memory is not abhilable then it may not allocated and through an error

    // using delete keyword as operator
    // delete arr;
    cout<<"value at *(arr) is: "<<*(arr)<<endl;
    cout<<"value at *(arr +1) is: "<<*(arr +1)<<endl;
    cout<<"value at *(arr +2) is: "<<*(arr +2)<<endl<<endl;

    // jub humai pura ka pura continious block ko delete karna padai 
    delete[] arr;
    cout<<"value at *(arr) is: "<<*(arr)<<endl;
    cout<<"value at *(arr +1) is: "<<*(arr +1)<<endl;
    cout<<"this is:"<<sizeof(*arr)<<endl;
    cout<<"value at *(arr +2) is: "<<*(arr +2)<<endl<<endl;

    // yai kebal free hi hua na ki pura variable delete nahi 
    arr[0]=0;
    arr[1]=1;
    arr[2]=12;
    cout<<"this is:"<<sizeof(arr[1])<<endl;
    cout<<"value at *(arr) is: "<<*(arr)<<endl;
    cout<<"value at *(arr +1) is: "<<*(arr +1)<<endl;
    cout<<"value at *(arr +2) is: "<<*(arr +2)<<endl<<endl;




return 0;
}