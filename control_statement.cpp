#include"iostream"
using namespace std;
int main(){
//  Basic control structure
    // sequence structure --> entry --> action1--->action2--->..end
    // selection structure --> entry --> condition_---> like if-else---> ..end
    // loop structure  --> entry---> condition check---> repete multi statement upto condn ment ---> ..end


// selection control if elseif else ladder
int age;
 cout<<" Enter your age :-"<<endl;
 cin>>age;
int id;
 cout<<" Enter your id :-"<<endl;
 cin>>id;
 
    //  if(age<=0){
    //     cout<<"you are not yet born"<<endl;
    // }

    //  else if(age<18 && age>0){
    //     cout<<"\n You are not invited"<<endl;
    //  }
    //  else if (age==18){
    //     cout<<"\n You are a small kid eat toffy and get kid pass"<<endl;

    //  }
    //  else{
    //     cout<<"\n You are invited"<<endl;

    //  }

// selction contrl statement using switch case
switch (age)
{
case 18:
    cout<<"you are now 18"<<endl;
    goto idq;
    break;
case 22:
    cout<<"you are now 22";
        goto idq;

    break;
case 24:
    cout<<"you are now 24";
        goto idq;

    break;
case 26:
    cout<<"you are now 26";
        goto idq;

    break;

default:
cout<< "you are not in our list";
    break;
// cout<<"\n you are not spacial"; // after break it can't work
}
idq :{
switch (id)
    {
    case 1:
        cout<<"\nyou are new"<<endl;
        break;
    
    case 2:
        cout<<"\nyou are fresher"<<endl;
        break;
    
    case 3:
        cout<<"\nyou are exprienced"<<endl;
        break;
    
    default:
        cout<<"\nYou have enter a worng entry";
        break;
    }
    
}





    return 0;
}