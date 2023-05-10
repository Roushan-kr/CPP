#include <iostream>
#include <cmath>
using namespace std;

/*
Create 2 classes:
    1. SimpleCalculator -Takes 2 input and perform arthematic operation
    2. scientificCalculator - Take 2 input using utility function and perform atleast 4 secientific function and display result using diff Function

    Create hydridCalculator Inheritated from above 2 class
    Q1. What Type of Inheritance are You using
    Q2. Which mode of Inheritance you are using
    Q3. Create an Object in HybrideCalculator and display  result of simple and scientific calculator

*/
int sCase = 0;       // i use this for future Disallocation int with float val
class SimpCalc;
class SciCalc;
void hybridSetVal1(SimpCalc); // use it to shuffel value
void hybridSetVal2(SciCalc); // use it to shuffel value



class SimpCalc
{
    int a, b, reslt;
    float c, d, resltInF;
    // friend void hybridSetVal() ;
protected:
    void arthemathic()
    {

        hybridSetVal1(SimpCalc) ;int sCase = 0;
        cout << "Want To do arthematic operation Then select \n";
        cout << "1. for Addition between given Number\n";
        cout << "2. for Substraction between given Number\n";
        cout << "3. for Multiplicaton between given Number\n";
        cout << "4. for Division between given Number\n";
        cout << "5. for Square of a Number\n";
        cout << "6. for Remainder between given Number\n";
        cout << "7. for SqureRoot\n";
        cout << "8. for %\n";
        cout << "9. for Exit\n";

    again:
        cin >> sCase;
        switch (sCase)
        {
        case 1:
            reslt = a + b;
            resltInF = c + d;
            break;
        case 2:
            reslt = a - b;
            resltInF = c - d;
            break;
        case 3:
            reslt = a * b;
            resltInF = c * d;
            break;
        case 4:
            reslt = a / b;
            resltInF = c / d;
            break;
        case 5:
            reslt = a * a;
            resltInF = c * c;
            break;
        case 6:
            reslt = a % b;
            break;
        case 7:
            reslt = sqrt(a);
            resltInF = sqrt(c);
            break;
        case 8:
            reslt = a * (1 / b);
            resltInF = c * (1 / d);
            break;
        case 9:
            break;
        default:
            cout << "Enter a vallid argument" << endl;
            goto again;
            break;
        }
    }
    // void add()
    // {
    //     reslt = a + b;
    //     resltInF = c + d;
    // }
    // void sub()
    // {
    //     reslt = a - b;
    //     resltInF = c - d;
    // }
    // void mult()
    // {
    //     reslt = a * b;
    //     resltInF = c * d;
    // }
    // void div()
    // {
    //     resltInF = c / d;
    //     resltInF = float(a) / float(b);
    // }
    // void reminder()
    // {
    //     reslt = a % b;
    //     // resltInF= c%d;
    // }
    // void square()
    // {
    //     reslt = a * a;
    //     resltInF = c * c;
    // }
    // void squrt()
    // {
    //     reslt = sqrt(a);
    //     resltInF = sqrt(c);
    // }
    // void percent()
    // {
    //     reslt = a * (1 / b);
    //     resltInF = c * (1 / d);
    // }

public:
    void simpSetNum(int x = 0, int y = 0)
    {
        a = x;
        b = y;
    }
    void simpSetNum(float x = 0, float y = 0)
    {
        c = x;
        d = y;
    }
    //  I use this here and i also know about ambegous result

    void PerformCalc()
    {
        arthemathic();
    }
    void SimpIntValue()
    {
        cout << " You have Entered " << a << ", " << b << " as your value" << endl;
    }
    void SimpFlotValue()
    {
        cout << " You have Entered " << c << ", " << d << " as your value" << endl;
    }
    void resultInt1()
    {
        cout << "and output is: " << reslt << endl;
    }

    void resultFlot1()
    {
        cout << "and output is: " << resltInF << endl;
    }
    //  For checking

    // void doThis(int x, int y)
    // {
    //     simpSetNum(x, y);
    // }
    // void callall()
    // {
    //     add();
    //     resultInt1();
    //     sub();
    //     resultInt1();
    //     mult();
    //     resultInt1();
    //     div();
    //     resultInt1();
    // }
};

class SciCalc
{
    // int a, b, reslt;
    float c, d, resltInF;
    // friend void hybridSetVal();
protected:
    void TrigoFunction()
    {
        hybridSetVal2(SciCalc);
        int n;
        cout << "select No in which you want to perform job in num only" << endl;
        cout << "1. for sin " << endl;
        cout << "2. for cos" << endl;
        cout << "3. for tan" << endl;
        cout << "4. for cot" << endl;
        cout << "5. for cosec" << endl;
        cout << "6. for sec" << endl;
        cin >> n;
        switch (n)
        {
        case 1:
            resltInF = sin(c);
            break;

        case 2:
            resltInF = cos(c);
            break;

        case 3:
            resltInF = tan(c);
            break;

        case 4:
            resltInF = 1 / tan(c);
            break;

        case 5:
            resltInF = 1 / cos(c);
            break;

        case 6:
            resltInF = 1 / sin(c);
            break;

        default:
            cout << "You Enterd a wrong input" << endl;
            break;
        }
    }
    void invTrigoFunction()
    {
        hybridSetVal2(SciCalc);
        int n;
        cout << "select No in which you want to perform job in num only" << endl;
        cout << "1. for sin-1 " << endl;
        cout << "2. for cos-1" << endl;
        cout << "3. for tan-1" << endl;
        cout << "4. for cot-1" << endl;
        cout << "5. for cosec-1" << endl;
        cout << "6. for sec-1" << endl;
        switch (n)
        {
        case 1:
            resltInF = asin(c);
            break;

        case 2:
            resltInF = acos(c);
            break;

        case 3:
            resltInF = atan(c);
            break;

        case 4:
            resltInF = 1 / atan(c);
            break;

        case 5:
            resltInF = 1 / acos(c);
            break;

        case 6:
            resltInF = 1 / asin(c);
            break;

        default:
            cout << "You Enterd a wrong input" << endl;
            break;
        }
    }
    
    void exponent()
    {
        hybridSetVal2(SciCalc);
        resltInF = pow(c, d);
        cout << "The value for " << c << "^" << d << endl;
    }

public:
    void sciSetNum(float x = 0, float y = 0)
    {
        c = x;
        d = y;
    }
    void sciSetNum(int x = 0, int y = 0)
    {
        c = float(x);
        d = y;
    }
    //  I use this here and i also know about ambegous result

    void performCalc()
    {
        int switchVal = 0;
        cout << "Want to do calculation then select: \n";
    again:
        cout << "1. for Trigometric value\n";
        cout << "2. for Inverse-Trigo value \n";
        cout << "3. for Exponent value\n";
        cout << "4. for exit\n";
        switch (switchVal)
        {
        case 1:
            TrigoFunction();
            break;
        case 2:
            invTrigoFunction();
            break;
        case 3:
            exponent();
            break;
        case 4:

            break;

        default:
            cout << "Try again!!\n";
            goto again;
            break;
        }
    }
    void sciFlotValue()
    {
        cout << " You have Entered " << c << ", " << d << " as your value" << endl;
    }
    void resultInt2()
    {
        cout << ", Your output is: " << resltInF << endl;
    }
};

void hybridSetVal1(SimpCalc simp1 )
{
    switch (::sCase)
    {
    again:
    case 1:
        float e, f;
        cout << "Enter your 1st value: \n";
        cin >> e;
        cout << "Enter your 2nd value: \n";
        cin >> f;
        simp1.simpSetNum(e, f);
        break;
    case 2:
        int x, y;
        cout << "Enter your 1st value: \n";
        cin >> x;
        cout << "Enter your 2nd value: \n";
        cin >> y;
        simp1.simpSetNum(x, y);

    default:
        cout
            << "Enter a valid value"
            << endl;
        goto again;
        break;
    }
}
void hybridSetVal2(SciCalc)
{
    switch (::sCase)
    {
    again:
    case 1:
        float e, f;
        cout << "Enter your 1st value: \n";
        cin >> e;
        cout << "Enter your 2nd value: \n";
        cin >> f;
        scientific(e, f);
        break;
    case 2:
        int x, y;
        cout << "Enter your 1st value: \n";
        cin >> x;
        cout << "Enter your 2nd value: \n";
        cin >> y;
        scientific(x, y);

    default:
        cout
            << "Enter a valid value"
            << endl;
        goto again;
        break;
    }
}
class HybrideCalc : public SimpCalc, public SciCalc
{
protected:
public:
    static int stathint;
    void simpFuncCall()
    {
    }
};
int HybrideCalc::stathint = 0;

int main()
{
    cout << "------"
         << "you are using calc now"
         << "------" << endl;
    // int inp1, inp2,sCase;
    // float finp1, fInp2;
    cout << "which type of operation you want use" << endl;
    cout << "1. for simple calculation" << endl;
    cout << "2. for scientific calculation\n";
    cin >> sCase;
    switch (sCase)
    {
    case 1:
        SimpCalc simp1;
        // s1.simpSetNum();
        cout << "\n Is your is int or float" << endl;
        cout << "Press 1 for integer operation" << endl;
        cout << "Press 2 for Float opration" << endl;
        cin >> ::sCase;
        switch (::sCase)
        {
        case 1:
            // hybridSetVal();
            simp1.PerformCalc();
            simp1.SimpIntValue();
            simp1.resultInt1();
            break;
        case 2:
            // hybridSetVal();
            simp1.PerformCalc();
            simp1.SimpFlotValue();
            simp1.resultFlot1();
        default:
            cout << "You have to enter a specific No.\n";
            break;
        }
        break;
    case 2:
        SciCalc sci2;
        cout << "\n Is your is int or float" << endl;
        cout << "Press 1 for integer operation" << endl;
        cout << "Press 2 for Float opration" << endl;
        cin >> ::sCase;
        switch (::sCase)
        {
        case 1:
            // int a, b;
            // cout << "Enter your 1st value: \n";
            // cin >> a;
            // cout << "Enter your 2nd value: \n";
            // cin >> b;
            // sci2.sciSetNum(a, b);
             hybridSetVal();
            sci2.performCalc();
            sci2.sciFlotValue();
            sci2.resultInt2();
            break;
        case 2:
            hybridSetVal();
            sci2.performCalc();
            sci2.sciFlotValue();
            sci2.sciFlotValue();

        default:
            cout << "You have to enter a specific No.\n";
            break;
        }
        break;

    default:
        cout << "Enter a valid integer" << endl;
        break;
    }

    return 0;
}

//  Ptna nhi kyu lagta hai jda optimise and apnai dura kuch condition kai chaker mai yai solve nahi ho paa rha hai jismai haar ak condition fulll filled honi kai sath nay condn dal datai ha.
// jikai kai char mai simple 170 line bla code approx 500 line ka ho gya
