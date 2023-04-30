// memory allocation with array

#include <iostream>
#include <string>
using namespace std;

class shop
{
    // usiing array inside a class
    string iteamId[50];
    float itamPrice[50];
    int counter;

public:
    void initCounter() { counter = 0; }
    void setPrice();
    void displayPrice();
};

void shop::setPrice(void)
{
    cout << "Enter the no of iteam" << endl;
    cin >> counter;
    for (int i = 0; i < counter; i++)
    {
        cout << "Enter Id of iteam" << i + 1 << ":-" << endl;
        cin >> iteamId[i];
        cout << "Enter value of iteam" << i + 1 << ":-" << endl;
        cin >> itamPrice[i];
    }
}

void shop::displayPrice(void)
{
    cout << "\n";
    for (int i = 0; i < counter; i++)
    {
        cout << "Value Id of iteam" << i + 1 << ":-" << endl;
        cout << iteamId[i];
        cout << "\n\tValue of iteam" << i + 1 << ":-" << endl;
        cout << "\t"<<itamPrice[i];
    }
    // cout<<"\n size of array is"<<sizeof(iteamId);
    // cout<<"\n size of array is"<<sizeof(itamPrice); // yai bla excepted result diya lakin upar bla nhi
}

int main()
{
    shop s1;
    s1.initCounter();
    s1.setPrice();
    s1.displayPrice();

    return 0;
}