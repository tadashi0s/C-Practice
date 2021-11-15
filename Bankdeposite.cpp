#include <bits/stdc++.h>
using namespace std;

class Bankdeposite
{
private:
    /* data */
    int principal;
    int year;
    float interestrate;
    float returnvalue;

public:
    Bankdeposite();
    Bankdeposite(int p, int y, float r);
    Bankdeposite(int p, int y, int r);
    void show();
};

Bankdeposite::Bankdeposite(int p, int y, float r)
{
    principal = p;
    year = y;
    interestrate = r;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + r);
    }
}

Bankdeposite::Bankdeposite(int p, int y, int r)
{
    principal = p;
    year = y;
    interestrate = float(r) / 100;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}

void Bankdeposite ::show(void)
{
    cout << endl
         << "Principal Amount is " << principal
         << ".Return money after " << year << " year is " << returnvalue << endl;
}
int main()
{
    int p, y;
    float r;
    int R;
    cout << "Enter the Values of p,y and r " << endl;
    cin >> p >> y >> r;

    Bankdeposite B1(p, y, r);
    B1.show();
    cout << "Enter the Values of p,y and r " << endl;
    cin >> p >> y >> R;

    Bankdeposite B2(p, y, R);
    B2.show();
    return 0;
}
