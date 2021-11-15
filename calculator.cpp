#include <bits/stdc++.h>
using namespace std;

class simplecalculator
{
protected:
    int a, b;

public:
    void getdata()
    {
        cout << "Enter the value of a " << endl;
        cin >> a;
        cout << "Enter the value of b " << endl;
        cin >> b;
    }
    void calculate()
    {
        cout << "Sum = " << (a + b) << endl;
        cout << "Sub = " << (a - b) << endl;
        cout << "Multi = " << (a * b) << endl;
        cout << "div = " << (a / b) << endl;
    }
};
class scientificcalculator
{
protected:
    int a, b;

public:
    void getsmartdata()
    {
        cout << "Enter the value of a " << endl;
        cin >> a;
        cout << "Enter the value of b " << endl;
        cin >> b;
    }
    void smartcalculate()
    {
        cout << "sine(a) = " << sin(a) << endl;
        cout << "cose(a) = " << cos(a) << endl;
        cout << "tan(a) = " << tan(a) << endl;
        cout << "exp(a) = " << exp(a) << endl;
        cout << "sine(b) = " << sin(b) << endl;
        cout << "cose(b) = " << cos(b) << endl;
        cout << "tan(b) = " << tan(b) << endl;
        cout << "exp(b) = " << exp(b) << endl;
    }
};
class hybridcalculator : public simplecalculator, public scientificcalculator
{
};
int main()
{
    hybridcalculator calc;
    calc.getdata();
    calc.calculate();
    calc.getsmartdata();
    calc.smartcalculate();
    return 0;
}