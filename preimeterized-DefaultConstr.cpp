# include<iostream>
using namespace std;

class complex {
    int a,b;
    public: 
        complex(int , int);
        void printNum(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }


};
// complex::complex(){ // default Constructor have no perimeters
//     a=0;
//     b=0;
// }
complex::complex(int x, int y){ // Perimeterize Constructor have  perimeters
    a=x;
    b=y;
}
class point{
int x,y;
    public:
        point(int a,int b) // In perimetrize const. we have to change the way of assigning data value
        {
            x=a;
            y=b;
        }
        void displayPoint(){
            cout <<"The cordinate of given pionts is "<<x<<" , "<<y<<endl;
        }
        friend float distBetwPoint( point );
        friend point distBetw2Pnt(point , point);
};
float distBetwPoint(point a){
    // a.displayPoint();
   if(a.x>a.y){
    return (a.x-a.y)/2;
   }
   if(a.x<a.y){
    return (-a.x+a.y)/2;
   }
}
point distBetw2Pnt(point a, point b){
    // a.displayPoint(); // Done for testing purpose
    // b.displayPoint();
    point c(a.x-b.x),a.y-b.y);
    cout<<"Distance of ";
    c.displayPoint();


}
int main(){
//  for passing value to perimetrtised constructor we use calls  
// e.g. implicited call
complex c1(1,2);
    c1.printNum();

// Explicited call
    complex b=complex(3,4);
    b.printNum();


    point p(5,6),q(7,12);
    p.displayPoint();
    q.displayPoint();
    cout<<"Distance between cordinate of first piont is "<<distBetwPoint(q)<<endl;  // returns int but i need it to be float  reason is point kai under float kai place par int pass ho rha hai
    distBetw2Pnt(p,q);
    cout<< endl;
return 0;
}