#include <iostream>
#include <vector> // similer to array but resizeable
using namespace std;

// void dispaly(vector <int> v){ // this also work
template <typename T>
void dispaly(vector <T> &v){  // by harry 
    cout<<"You called me!!"<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        // cout<<v[i]<<" ";
        cout<<v.at(i)<<" "; // same v[i]
        // cout<<<<" ";
    }
    
}
int main()
{
// ways to make vector 
    vector<int> vec1; // Now this is a zero lenth int vector
    // dispaly(vec1);
    int size=5;
    vector <char> vec2(7);  // 7-element char vector
    // dispaly(vec2);
    // vec2.push_back('a');
    // vec2.push_back('b');
    // vec2.push_back('c');
    // vec2.push_back('d');
    // dispaly(vec2);
    // cout<<vec2.size();
    vector <char> vec3(vec2);  // 7-element char vector from vec2
    // dispaly(vec3);
    // cout<<vec3.size();
    vector <int> v(6,3);
    // dispaly(v);
    cout<<v.size();



    // cout<<"Enter the size of vector: ";
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     int element;
    //     cout << "Enter an element for this vector: ";
    //     cin >> element;
    //     vec1.push_back(element); // it need refrence to add a element 
    // }

    // vec1.pop_back(); // use to remove last one element from this vector
    // Removes last element. This is a typical stack operation. It shrinks the %vector by one. Note that no data is returned, and if the last element's data is needed, it should be retrieved before pop_back() is called.
    // dispaly(vec1);

    // // making a iterater
    // vector <int> ::iterator iter=vec1.begin();  // making a pointer of name iter with iterator template
    // vec1.insert(iter, 420);
    // cout<<"\n this is after making iterator with insert() operation\n";
    // dispaly(vec1);

    // cout<<"\n resolving iter var\n";
    // vec1.insert(iter+1,25);
    // // vec1.insert(iter+1,25);  over-write na hokai iskai according work keraga
    // dispaly(vec1);

    // cout<<"\nRepecting it multiple times\n";
    // vec1.insert(iter+1 , 5,566);
    // dispaly(vec1);


    return 0;
}