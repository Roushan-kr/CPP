#include <iostream>
using namespace std;

// when  we make class and use object then here class beheave like a templates in this way
// we use actual/defind templates to drive diffrent class similar to above
// Templates help us to use DRY principle and do generic programming
// it generaly help us to drive from driving diffrent class based on diffrent dataType overloading(simlar to it)
// Also known as prameterized clsses
/*
template <class T>
class vector{
    T varName;
    T* varName2;
    //T defined by user or it may carry default aregument <class T=int> it is generly ant=y proper dataType
    // Code part
}
in main function it decleareed like
vector <float> v1; --> here float just over write default in value if decleard
*/

//  Template help use to represent diffrent class with specific template base arthicture
//  STl(stenderd template library) can also taken as use

// E.g .

// class vector
// {
// public:
//     int *arr; // use this for simole demonstraction.
//     int size; // use this for simole demonstraction.
//     vector(int size)
//     {
//         this->size = size;
//         arr = new int[this->size];
//     }
//     int dotproduct(vector &a)
//     {
//         int d = 0;
//         for (int i = 0; i < this->size; i++)
//         {
//             d += this->arr[i] * a.arr[i];
//         }
//         return d;
//     }
// };

//  Now class with Templates 
template <class T>
class vector
{
public:
    T *arr; // use this for simole demonstraction.
    int size; // use this for simole demonstraction.
    vector(int size)
    {
        this->size = size;
        arr = new T[this->size];
    }
    T dotproduct(vector &a)
    {
        T d = 0;
        for (int i = 0; i < this->size; i++)
        {
            d += this->arr[i] * a.arr[i];
        }
        return d;
    }
};
int main()
{
    // vector v(5);
    // v.arr[0] = 10;
    // v.arr[1] = 11;
    // v.arr[2] = 12;
    // v.arr[3] = 13;
    // v.arr[4] = 14;
    // vector v2(5);
    // v2.arr[0] = 0;
    // v2.arr[1] = 1;
    // v2.arr[2] = 2;
    // v2.arr[3] = 3;
    // v2.arr[4] = 4;
    // cout<<"The dot product of two vector is: "<<v.dotproduct(v2)<<endl;
    vector <float>v(5);
    v.arr[0] = 10.26;
    v.arr[1] = 11.26;
    v.arr[2] = 12.26;
    v.arr[3] = 13.26;
    v.arr[4] = 14.26;

    vector<float> v2(5);
    v2.arr[0] = 0.26;
    v2.arr[1] = 1.26;
    v2.arr[2] = 2.26;
    v2.arr[3] = 3.26;
    v2.arr[4] = 4.26;
    cout<<"The dot product of two vector is: "<<v.dotproduct(v2)<<endl;
//  by using template i am able to get proper value
// Insitide of hard coding this we add template and specify data type in it
    return 0;
}