#include <iostream>
#include <cstring>
using namespace std;

class Base
{
public:
    int var1;
    void display()
    { // iska according overwite honai par overwrited function run krna otherwise i am still waiting and able to run joki virtual function per posible hai
        // help to get runtime running
        // compiler bind obj to their respected function adress on runtime
        cout << "The value of var from base class is: " << var1 << endl;
    }
};

class Derived : public Base
{
public:
    int var2;
    void display()
    {
        cout << "The value of var from derived class is: " << var2 << endl;
        cout << "The value of var from Base class is: " << var1 << endl;
    }
};

// Example -2
class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string title, float r)
    {
        this->title = title;
        // strcpy(title,this->title);
        rating = r;
    }
    virtual void display()
    {
        // if this is not virtual then it try to run it's own code 

    }
};
class CWHVideo : public CWH
{
    float videoLength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        videoLength = vl;
    }
    void display()
    {
        cout << "Title of this Page is: " << title << endl;
        cout << "Rating of this page out of 5 is: " << rating << endl;
        cout << "video length of this page is: " << videoLength << " min" << endl;
    }
};
class CWHText : public CWH
{
    int wordCount;

public:
    CWHText(string s, float r, int wc) : CWH(s, r)
    {
        wordCount = wc;
    }
    void display()
    {
        cout << "Title of this Page is: " << title << endl;
        cout << "Rating of this page out of 5 is: " << rating << endl;
        cout << "words length of this page is: " << wordCount << endl;
    }
};
int main()
{

    Base *base_class_ptr;
    Derived obj_derived;
    base_class_ptr = &obj_derived;
    base_class_ptr->var1 = 14;
    // base_class_ptr->display();

    // for text page
    CWHText page1("\nThis is my first blog", 3.9, 1200);
    // page1.display();

    CWHVideo v1("\nThis is a sample video about c", 4.3, 7.30);
    // v1.display();

    cout << "\n";
    // CWH* ptr[2];
    // ptr[0] = &page1; // i my call it twice
    // ptr[1] = &v1;

    // ptr[0]->display();
    // ptr[1]->display();

    CWH *tut[2];
    tut[0] = &page1; // iskai liyai isko public derivation hie padega other not allowed
    tut[1] = &v1;
    tut[0]->display();
    cout << endl;
    tut[1]->display();

    return 0;

    // incomplete;
}

// Rules for virtual function
// 1. They cann't be static
// 2. They are acessed by obj pointer 
// 3. virtual function can be a friend of another class 
// 4. A virtual functin in a base class might not be used. e.g. CWH bla base function
// 5. If a virtual finction is not defined in derived class then it is not nesessity to redefine it, if not redefined then it try to run it self one.

