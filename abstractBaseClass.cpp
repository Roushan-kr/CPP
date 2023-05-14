#include <iostream>
using namespace std;

// A class make as a base class which contain atlest all similer perimeter which use by derive class to get a ideal basic representation.

class CWH // This class maked only to support all deerived classes
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
    virtual void display() = 0; // do nothing function --> pure virtal function
    //    is virtual function ko har ak drive class mai jaurari hi redefine kerna
    // it just insueare that all drive class need to define it
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
    CWHText page2("this ia sampple page 2", 4.2, 1532);
    CWHVideo video2("this is a another sample video", 3.6, 4.5);
    page2.display();
    cout << "\n";
    video2.display();

    return 0;
}

//  Note:-
//  1. pure virtual function are use to make abstract class 
//  2. abstract base class are not use to create object but it use to derive(inherate) other class only  
//  3. A abstrect base classs contain atleat one virtual function
//  4. function()=0 for it to redefine while inheritance.
