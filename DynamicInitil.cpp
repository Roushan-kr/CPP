#include <iostream>
using namespace std;

//  Dyanmic constructor mean while in runtime what user input act accordinly

class bankDeposit
{
    int principal;
    int year;
    float intRate;
    float returnVal;

public:
    bankDeposit() {} // blank constt. use karnai par uninitilized value ko proper call mai render kar lai 
    bankDeposit(int p, int y, int r)
    {
        principal = p;
        year = y;
        intRate = float(r) / 100;
        returnVal = principal;
        for (int i = 0; i < year; i++)
        {
            returnVal = returnVal * (1 + intRate);
        }
    }
    bankDeposit(int p, int y, float r)
    {
        principal = p;
        year = y;
        //  done some error correction
        if (r < 1)
        {
            intRate = r;
        }
        if (r >=1)
        {
            intRate = r / 100;
        }
        returnVal = principal;
        for (int i = 0; i < year; i++)
        {
            returnVal = returnVal * (1 + intRate);
        }
    }
    void showval();
};
void bankDeposit::showval()
{
    cout << " For principal value: " << principal << " and at rate " << intRate << ", for "<< year <<" year " << " your return value after compounding is: " << returnVal << endl;
}
int main()
{
    bankDeposit bd1, bd2, bd3; // bina empity fiction kai kam hi nahi keraga 
    int p, y, t, R;
    float r;
    cout << "Enter value of p, y and r(f) respictly" << endl;
    cin >> p >> y >> r;
//    bankDeposit bd1 = bankDeposit(p, y, r);  // upar kai comment kai kai agent mai
    bd1 = bankDeposit(p, y, r); // jub upar bla kai respect mai
    //  bd1(p,y,r); // you are not able to do like this 
    bd1.showval();
    cout << "Enter value of p, y and r respictly" << endl;
    cin >> p >> y >> R;
//    bankDeposit bd2 = bankDeposit(p, y, R);
    bd2 = bankDeposit(p, y, R); 
    bd2.showval();
    bd3.showval();
    cout << endl;
    return 0;
}

//  Note:-
//      1. balnk constt. kai help sai humai uninitilised value ko render kar satai hai
//      2. ydi iska use nahi karai to humai uskai entry kai uskai class kai help sai usi define karna peraga
//         as shown in line 58,64 ulta for next line 

//      3. As obous bd3 takes garbage value
//      4. It not even use to maintain blank data but also get compiler idea where to invoke call for that function to relize error handling 
