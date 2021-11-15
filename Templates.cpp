#include <bits/stdc++.h>
using namespace std;

template <class T>
class Vector
{
public:
    T *arr;
    int size;
    Vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotproduct(Vector &V)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * V.arr[i];
        }
        return d;
    }
};
int main()
{
    Vector<float> V1(3);
    V1.arr[0] = 2.4;
    V1.arr[1] = 4.2;
    V1.arr[2] = 1.5;
    Vector<float> V2(3);
    V2.arr[0] = 1.4;
    V2.arr[1] = 1.8;
    V2.arr[2] = 6.0;
    float a = V1.dotproduct(V2);
    cout << a << endl;
    return 0;
}
