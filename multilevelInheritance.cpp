#include <iostream>
using namespace std;

// multilevel inheritance mai extend base class or drived also use to extende again and again
// Inheritance traid disided by mode of inheritance
// The way we inheriate classes called as inheritance path

class student
{
protected:
    int rollNo;

public:
    // student(){};
    // student(int inpr){
    //     rollNo =inpr;
    // }
    // yet i don't now how to get value using this
    void set_roll(int gr)
    {
        rollNo = gr;
    }
    void dispRoll()
    {
        cout << "The roll No of student is " << rollNo << endl;
    }
};

class Exam : protected student
{
protected:
    float mathsMark;
    float scienceMarks;

public:
    void set_marks(float, float);
    void get_marks();
    void roll(int a){
        set_roll(a);
    }

};
void Exam::set_marks(float m = 0, float s = 0)
{
    mathsMark = m;
    scienceMarks = s;
}
void Exam::get_marks()
{
    dispRoll();
    cout << "The mark in maths are " << mathsMark << ", and in science " << scienceMarks << endl;
}

class Result : public Exam
{
    float percentage;

public:
    // void inputval(Exam &obj1)
    // {
    //     int a;
    //     float b, c;
    //     cout << "Enter roll of the student: ";
    //     cin >> a;
    //     set_roll(a);
    //     cout << "Enter mark of the student in maths: ";
    //     cin >> b;
    //     cout << "Enter mark of the student in science: ";
    //     cin >> c;
    //     set_marks(b, c);
    // }  // pata nahi laykin hum try karna chyatai thai
    void dispaly()
    {
        cout << "The percientage mark he get is " << (mathsMark + scienceMarks) / 2 << endl;
    }
//     Result(){}
//    Result(int a){
//     set_roll=a;
//    }
};

int main()
{
    Result rj;
    rj.roll(50);
    rj.set_marks(99,97);
    rj.dispaly();
    rj.get_marks();
    cout << endl;
    return 0;
}