#include <iostream>
using namespace std;

//  Virtual Base class
// when we inherate same class with diffrent drived class and then call them(drived) like multiple level inheritance then the resultant third class may contain some member/fuctioon whic is ambigues in nature.
//  It means it may contain some duplicate value and function which led compiler confused to execute which function invoke when from where
// That why we use Virtual class to let compiler understood which member need not to be duplicate mean it let then drived function which drived by using vitual class derivation to make only one instance only
// Syntex
//  class derived : virtual public base1 {=same hai=} public virtal base1; // yha base1 is is virtual class dervtion not derived
//  generaly save us from duplicicy and ambiguity

// E.g.
//  Student ---> inherate hua Test and Score
// inherated Test and Score ---> inherate hua Result
// yha jo value student sai Test and Score mai parse hua wh Result mai ja kai duplicacy and ambugity ko produce keraga
//  Bus data member ko ak copy sai jda inheratee nahi kerai

class Student
{
protected:
    int roll_no;

public:
    void setNumber(int a = 0)
    {
        roll_no = a;
    }
    void printRoll()
    {
        cout << "Your Roll number is: " << roll_no << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths_marks, physics_marks;

public:
    void setNumber(float m1, float m2) {
        maths_marks = m1;
        physics_marks = m2;
    }
    void printMarks(){
        cout <<"You have obtained "<<maths_marks<<" in maths and "<<physics_marks<<"in physics \n";
    }
};

class Sports :public virtual Student{
    protected:
    float score;
    public:
        void setScore(float s){
            score=s;
        }
        void printScore(){
            cout<<"You obtain "<<score<<" in Sports\n ";
        }
};
class Result: protected Sports, protected Test{
float Result;
public:

    void SetValue(float m1=0,float m2=0, float s=0, int roll=1){
        maths_marks=m1;
        physics_marks=m2;
        score=s;
        roll_no=roll;
    }
    void showResult(){
        Result =maths_marks+physics_marks;
        printRoll();
        printScore();
        printMarks();
        cout<<"You obtain: "<<Result/2<<"% and In your Sport you got: "<<score<<endl;
        cout<<" Total marks is "<< Result+score<<" out of 210 \n";
    }

};

int main()
{   
    // we also take one by oneinput by use but to make it simple i use this
    Result rj;
    rj.SetValue(97.3f,94.2f,6,50); // why i am not able to write 6f
    rj.showResult();
    // the abegios function is roll_number which is solved by using virtal class
    cout << endl;
    return 0;
}