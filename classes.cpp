# include<iostream>
# include<string>
using namespace std;

// OOPs --> classes and object 
// C++ initialy called c with classes by stroustroup
// classes --> extension of structure
//  struct limatation 
    //  - member are public
    //  - no Methods 
//  classes --> struct + more(methods, and prop(private , public data) )
//  structure are typedef


// classes may defined like this 
    /* class employe {
        // class description

    }rj, sahil, aryan
    */

// rj.salary =14; make no sense if this is private member;

class binary{
    // by default class mai value private hota hai
    // private: // it may be in comment 
    string s;  // yha yai dno private hai 
    int flag=1;
    void chk_bin (void);

    public:
    void read(void);
    void ones_comp(void);
    void display (void);
};
void binary ::read(void){
    cout<<"Enter a Binary No:-"<<endl;
    cin>>s;
};

void binary::chk_bin(void){
    for (int i=0; i<s.length(); i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Input no is not Binary "<<endl;
            flag=0;
            break;
        }
        
    }
};
void binary::ones_comp(void){
    // chk_bin();  // nesting member in a class
    //  when  this function call then it automaticaly call this nested member
    chk_bin();
    if (flag==1){
        cout<<"Input Number is a binary"<<endl;
    cout<<"Ones compliment of given binary is "<<endl;
    for(int j=0; j<s.length(); j++){
        if(s.at(j)=='1'){
            s.at(j)='0';
            }
        else{
            s.at(j)='1';
        }
    
    }
    }
    else if (flag==0){
        cout <<"Not able to compliment"<<endl;
    }
};
void binary::display(void){
    cout<<" The value of the string is : "<<s<<endl;
};

int main(){

// main kai under driver program hoga

binary c;
c.read();
// c.chk_bin(); // refrer line no 52 // when i use this function as private then i can't acces form here
//  for accrsing this put it inside any public function in which class where you wannted be
c.display();
c.ones_comp();
c.display();

// binary s=15112; //conversion from 'int' to non-scalar type 'binary' requested

return 0;
}