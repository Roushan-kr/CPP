#include <iostream>
#include <list> // insertion and delition is fast but search not and it is bi-directional
using namespace std;

template <typename T>
void dispaly(list<T> &lst)
{
    list<int>::iterator it = lst.begin();  // list ka type int hi hota hai kya?
    for (it; it != lst.end(); it++)
    {

        cout << *it << " ";
    }
    cout<<" \n";
}
int main()
{

    list<int> list1; // list of zero length
    // list <int> list2(3); // list of 3 element mean only memory is resurved only
    list1.push_back(12);
    list1.push_back(14);
    list1.push_back(15);
    list1.push_back(13);
    list1.push_back(15);

    //  Making a iterator in list

    list<int>::iterator iter = list1.begin(); // refrence to first element to this
    // cout<<*iter<<endl;
    // iter++;
    // cout<<*iter<<endl; // way to display value
    dispaly(list1);

    list <int> list2(3);
    list <int> ::iterator iter2;
    iter2=list2.begin();
    *iter2 =45;
    iter2++;
    *iter2 =44;
    iter2++;
    *iter2 =43;
    iter2++;
    *iter2 =43;
    iter2++;
     dispaly(list2);

// removing element from list 
    // list2.pop_back(); //removing last element
    // dispaly(list2);
    // list2.pop_front(); //removing front element
    // dispaly(list2);
    // list1.remove(15); //removing  all fixed value oucrence
    // dispaly(list1);

// shorting list 
    // dispaly(list1);
    // list1.sort();
    // dispaly(list1);

// Merging list 
    // list1.sort();
    // list1.merge(list2);  // repecation add nahi kerta
    // dispaly(list1);

// Reversing a list
    list1.reverse();
    dispaly(list1);

    
    return 0;
}