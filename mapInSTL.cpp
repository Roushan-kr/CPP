# include<iostream>
#include<map>  //use to stores key and keyValue palyers 
#include<string>
using namespace std;

// Map is an associative array


int main(){
    map <string, int> marksMap;
    marksMap["rj"]=97;
    marksMap["aryan"]=95;
    marksMap["sahil"]=96;

    //  making iterator
    map <string, int>::iterator iter=marksMap.begin();

// for inserting value
    marksMap.insert({{"koma",75},{"kemlesh", 79}});




// for printing value to screen  
for(iter; iter!=marksMap.end(); iter++){
    cout<<(*iter).first<<" "<<(*iter).second<<endl;
    // *iter sai key milaga and .first , .secound sai value
}
//  size of list
cout<<"The size of this map STL is: "<<marksMap.size();
    cout<< endl;

// for checking map is empity 
int a=marksMap.empty(); // return bool value 0 for non empity
cout<<"Is it empity: "<<a<<endl;
// seeing max size of this map
cout<<"This map is of max size: "<<marksMap.max_size();
return 0;
}