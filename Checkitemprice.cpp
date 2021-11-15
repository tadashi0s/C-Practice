#include <bits/stdc++.h>
using namespace std;

class dukaan
{
    //private:
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initicounter(void)
    {
        counter = 0;
    }
    void price(void);
    void displayprice(void);
};

void dukaan ::price(void)
{
    cout << "Enter item no " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter Price of Item " << itemId[counter] << endl;
    cin >> itemPrice[counter];
    counter++;
}
void dukaan ::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "Item Price of Item " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    dukaan s;
    s.initicounter();
    s.price();
    s.price();
    s.displayprice();
    return 0;
}
