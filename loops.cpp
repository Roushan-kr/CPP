#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    //  loop in c++
        // 1. for loop
        // 2. while loop
        // 3. do-wile loop
    
//  for loop in c++
    // for (int i = 1; i <= 100; i++)
    // {
    //     cout<<i<<endl;
    // }
    
    //  for infinte loop 
        // put value of limit to always true e.g. 38<40; or any always true condition
            // for (int i = 0; 22 < 23; i++)
            // {
            //     cout<<i<<endl;
            // }

// while loop
    // while (/* condition */)
    // {
    //     /* code */
    //     // statement
    // }
// int i=1; 

    //   while (i<=15)
    //   {
    //     cout<<i<<endl;
    //     i++;
    //   }
        
    //  for infinite loop 
        // may be slow hai for loop sai
        // while (true)
        // {
        //     cout<<i<<endl;
        //     i++;
        // }
    
//  do-wile loop
    // 
    // int i=1;
    // do
    // {
    //     cout<<i<<endl;
    //     i++;
    // } while (i<=45);

// int i=1;
// do
// {
//     cout<<"6 X"<<setw(3)<<i<<"="<<setw(3)<<6*i<<endl;
//     i++;
// } while (true);


// *******use of break in infinite loop*********
// int i=1;
// do
// {
//     cout<<"6 X"<<setw(3)<<i<<"="<<setw(3)<<6*i<<endl;
//     i++;
//     if (i==16)
//     {
//         break;
//     }
    
// } while (true);


for (int i = 0; i <= 15; i++)
{
    if(i==2){
        continue;
    }
    cout<<i<<endl;
    // yai bla work nahi keraga because it is in lower itration
    if(i==3){
        continue;
    }

}













    return 0;

}
