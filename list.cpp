#include <bits/stdc++.h>
#include<list>
using namespace std;

void display(list<int> &list2)
{
    list2<int>::iterator it;
    for (int it = list2.begin(); it != list2.end(); it++)
    {
        cout << *it << " ";
    }
}
int main()
{
    list<int> list1;
    // int element, size;
    // cout << "Enter the size of list " << endl;
    // cin >> size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter the Element ";
    //     cin >> element;
    //     list1.push_back(element);
    // }
    // cout << "list is " << endl;
    list1.push_back(5);
    list1.push_back(34);
    list1.push_back(9);
    list1.push_back(8);
    display(list1);
    return 0;
}
