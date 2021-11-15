#include <bits/stdc++.h>
using namespace std;

class complexNo
{
//private:
    int a;
    int b;

public:
    complexNo(int v1, int v2=4)
    {
        a = v1;
        b = v2;
    }
    void display()
    {
        cout << "Complex no is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    complexNo c1(3);
    c1.display();

    complexNo c2(7,9);
    c2.display();

    return 0;
}
