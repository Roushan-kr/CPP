# include<iostream>
using namespace std;

// Syntex:-
// class Derived: visibility-mode base1, visibility-mode base2{
//     //  codes{body}
// };
//  Not only 2 we inherate multiple property

// You know That a  class is just a blue print it do nothing 
class base1{
    protected:
        int base1Int;
    public:
        void Set_base1Int(int a){
            base1Int =a;
        }
};


class base2{
    protected:
        int base2Int;
    public:
        void Set_base2Int(int a){
            base2Int =a;
        }
};

class base3{
    protected:
        int base3Int;
    public:
        void Set_base3Int(int a){
            base3Int =a;
        }
};

class Derived : protected base1, public base2,  base3{
int drivedInt;
    public:
        void Set_DerivedInt(int a){
            base1Int =a;
            base3Int=14;
        }
        void show(){
            cout <<"Value of base1 int is: "<<base1Int<<", Value of Base2 Int int is: "<<base2Int<<endl;
        }
        void sum(){
            cout<<"Sum of Base1 and Base2 Int is "<<base1Int+base2Int<<endl;
        }
        void sum2(){
            cout<<"\nValue od Base3 is: "<<base3Int<<endl;
            cout<<"Sum of Base1, Base2 and private Base3 Int is "<<base1Int+base2Int+base3Int<<endl;
        }

};
// Now see what inheritated variable/member the Derived Class get
// base1int , base2int --> protected
// public function of Base1 is protected, base2 is public and base3 is privarte 

int main(){
    Derived rj;
    rj.Set_base2Int(15);
    rj.Set_DerivedInt(12);
    rj.show();
    rj.sum();
    rj.sum2();

    cout<< endl;
return 0;
}