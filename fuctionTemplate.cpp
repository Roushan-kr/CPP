#include <iostream>
using namespace std;
/*
float averageOfTwo(int a, int b){
    return float(a+b)/2;
}
float averageOfTwo2(int a, float b){
    return (float(a)+b)/2;
}
*/
//  function using template
template <class T1, class T2>
float funcAvg(T1 a, T2 b)
{
    return float(a + b) / 2;
}

template <class T=int> // i can't use swap so use swapp
void swapp(T &a, T &b)
{
    cout << "value of a before swap is: " << a << endl;
    cout << "value of b before swap is: " << b << endl;
    T temp = a;
    a = b;
    b = temp;
    cout << "value of a after swap is: " << a << endl;
    cout << "value of b after swap is: " << b << endl;
}

// float avg (int a, int b){
//     return float(a+b)/2;
// }
// float avg (float a, int b){
//     return float(a+b)/2;
// }
// float avg (float a, float b){
//     return float(a+b)/2;
// }

// Istide of using this we use template in place of this
template <class T1 = float, class T2 = float>
float avg(T1 a, T2 b)
{
    return float(a + b) / 2;
}

int main()
{
    /*
    cout<<"the average of two no 36 and 45 is: "<<averageOfTwo(36,45)<<endl;
    cout<<"the average of two no 36 and 46.4566 is: "<<averageOfTwo2(36,46.4566f)<<endl;
    */
    // cout << "the average of two no 36 and 45 is: " << funcAvg(36, 45) << endl;
    // cout << "the average of two no 36 and 46.4566 is: " << funcAvg(36, 46.4566f) << endl;
    int x = 45, y = 5;
    // swapp(15.5, 14.5); // it have to use with some veriable name not directly 
    swapp(x, y);
    // cout<<avg(15,15)<<endl;
    // cout<<avg(15.78f,15)<<endl;
    // cout<<avg(15.60f,15.45f)<<endl;

    cout << endl;
    return 0;
}