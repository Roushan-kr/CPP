#include <iostream>
#include <fstream> // file i-o operation
#include<string>
using namespace std;
//  file is a sequential flow pattern of data in disk which genraly store as binnary ascii char.
// strem is just a interface to tranfer data b/w other two interface

/*
    some useful classes for working with file in C++
    1. fstreambase
    2. ifstream  -->derived from fstreambase
    3. ofstream  -->derived from fstreambase
*/

// while working with file in C++ we have two way to open it.
// 1. Using the constructor
// 2. Using the member function open() of the class

int main()
{
    // opeaning file using constructor
    // ofstream out("sample_i-oFile.txt"); // ofsteam is a class from fstream use to write file
    // string st = "This comes from C++ exe";
    // out << st;
    // out << "\nHave you seen it!";
    // string st2;
    // ifstream in("file_i-oFileB.txt"); // a class form fstream use to Reding to it
    // //  in>>st2;  // it just able to carry out only string upto space/break/other interupt comes
    // // cout<<st2; // marai mai kuch nahi aya

    // getline(in, st2); // it takes one ifstream object and a string variable
    // cout << st2;      // getline function able to take next input frim file as the no of times it call by a user
    // getline(in, st2); // string just it as string not did any string fuunction to it
    // cout << st2;
    // getline(in, st2);
    // cout << st2; // if it found nothing in last line then this repeate it old value

    //  Method-2

    //  connecting our C++ file with rout
    ofstream rout("file_i-oFileB.txt");
    rout << "Is this me!! ";
    // creating a var name which carry user input to file
    string str;
    cout << "Enter your name: " << endl;
    cin >> str;
    // adding some more string to it
    rout << str + ", and am i a C.S.E. ";

    //  Now free out this file from this operation
    rout.close();

    // After making this file free from above operation we are now able to perform other operation
    ifstream rin("file_i-oFileB.txt");
    string st2;
    getline(rin, st2);
    cout << st2;
    // getline(rin,st2); // why it not able to again retake it susser string value b/c i have not included string header file
    // cout << st2;

    return 0;
}