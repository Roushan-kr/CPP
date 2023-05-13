# include<iostream>
using namespace std;

class shopIteam{
int id;
float price;
public:
    void setData(int a, float b){
        id=a;
        price =b;
    }
    void getData(){
        cout<<"The id of this iteam is: "<<id<<endl;
        cout<<"The price of this iteam is: "<<price<<endl;
    }

};


int main(){
int size=2; // i also take it by user but i hard-code this..
// int *ptr=size;  --> just variation
// int *ptr =new int[size];  --> just variation ismai sizeof(int)*size itna space allocated dinamicaly
shopIteam *sIptr =new shopIteam[size];

// Method 1:

// for (int i = 0; i < size; i++)
// {   int iteamID;
//     float price;
//     cout<<"Enter the product id of iteam "<<i+1<<endl;
//     cin>>iteamID;
//     cout<<"Enter the product price of iteam "<<i+1<<endl;
//     cin>>price;
//     sIptr[i].setData(iteamID,price);
// }
// cout<<" \n your Input Value is \n";
// for (int i = 0; i < size; i++)
// {   
//     sIptr[i].getData();
// }


// shopIteam *sIptr =new shopIteam[size];

// Method 2: to itrate inside this
shopIteam *ptrTemp = sIptr; // method 2.2  ydi yha diyai tubhi execute hoga and proper value assign hoga
// look similer to link list
for (int i = 0; i < size; i++)
{   int iteamID;
    float price;
    cout<<"Enter the product id of iteam "<<i+1<<endl;
    cin>>iteamID;
    cout<<"Enter the product price of iteam "<<i+1<<endl;
    cin>>price;
    sIptr->setData(iteamID,price);
    sIptr++;
}
// sIptr--;
// shopIteam *ptrTemp = sIptr; // method 2.2 // yha execute hoga but proper value assign nhi hoga
// maybe yha sIptr update ho gya ho mean jis karan ayesha hua and gess i am right 

for (int i = 0; i < size; i++)
{
    // --sIptr; //method 2.1
    // sIptr->getData(); // method 2.1
    ptrTemp->getData(); // method 2.2
    ptrTemp++;


}



// Note:-
//      1. jub hum jha jis position mai pointer assign keragnai wha us position mai pointer try to collect its value amd value presiding this not before.



return 0;
}