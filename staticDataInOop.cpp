//  static data-type ko class kai under initilize nahi kartai; it's a class associated member
//  static var also called as class var
//  scope - under class , visibility _ untill program work
#include <iostream>
#include <string>

using namespace std;

class Employee
{
private:
    int id;
    // static int count =1001; // return a syntex error // here we can't initilize for init go to lower declearing section
    static int count; // nichai datatype fir class name fir scope resolution operator fir var name then you have right to declear static var here;

    // string uid[]; //error: flexible array member 'Employee::uid' not at end of 'class Employee'
    string Name[10];

public:
    void setData(void)
    {
        cout << "Enter the Id of Employe:" << endl;
        cin >> id;
        cout << "Enter the Name of Employe:" << endl;
        count++; // ydi yha int hota to bar bar haar object kai liya spacial banta
        cin >> Name[count];
        //  static var sai indivisual kai place par har object value share kerga
    }
    void getData(void)
    {
        cout << "The Id of Employe " << count << " is : " << id << endl;
        cout << "The Name of Employe " << count << " is : " << Name[count] << endl;
    }

    //  static funcrtion
    static void getCount(void)
    {
        // cout<<id; // we are not able to do this because it is not a static member
        cout << "Value of count is " << count << " now!" << endl;
    }
};

//  Static data member of class Employee

//  yai jo count name ka var hai yai ak bar memory lega bar-bar usi ko update keraga
int Employee::count = 0; // by default static int initilise with 0, here you can change it
//   yai yha har ak object kai sath na aki class kai sath ayga!
//  default tor par memory allocate according to object
//  lakin isko nichai define karnai kai karan yai class kai sath aya...

//  we init static value here only mean outside the class

int main()
{
    Employee rj, shail, aryan;
    rj.setData();
    rj.getData();
    //  for assecing static function
    Employee::getCount();

    shail.setData();
    shail.getData();
    Employee::getCount(); // use to make utility finction

    aryan.setData();
    aryan.getData();
    Employee::getCount(); // clearly see it does not required obj to access it

    return 0;
}
// note:-
//      static function able to asses all static member only
//      static function did not requred object to run insite it required only class to run
//       for making a static function add static to it initial phase of declearing it
//      static var initilise one and declear twice

//  question
//   1. yadi koi bhi class kai variable ko bhar(class kai) define karai to wh static data-type hoga always
