# include<iostream>
#include<fstream>
#include<string>
using namespace std;



int main(){

ofstream out;
out.open("file_i-oFileB.txt");
out<<"I am back. ";
out<<"\n you found me again!!";
out.close();  // good prectice to close this while we completed task


ifstream in;
in.open("file_i-oFileB.txt");
string str1,st;
// getline(in, str1);
// cout<<str1;
// getline(in, str1);  // it work after including string to header file 
// cout<<str1;
// for printing whole string in file  
while (in.eof()==0)
{
    getline(in, st);
    cout<<st<<endl;
}
ifstream in2("file_i-oFileB.txt");
while (in2.eof()==0)
{
    getline(in2, st);
    cout<<st<<endl;
}


in.close();

return 0;
}