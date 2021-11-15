#include <bits/stdc++.h>
using namespace std;

void totalcost(int rupees1, int rupees2, int first_hour, int total_hour)
{
    int total_hour_in_hours = (total_hour + 59) / 60;
    int first_money = rupees1 * first_hour;
    int second_money = rupees2 * (total_hour_in_hours - first_hour);
    if (total_hour_in_hours > first_hour)
        cout << (first_money + second_money);
    else
        cout << first_money;
}
int main()
{
    int rupees1, rupees2, hour, total_hour;
    cin >> rupees1;
    cin >> rupees2;
    cin >> hour;
    cin >> total_hour;
    totalcost(rupees1, rupees2, hour, total_hour);
    return 0;
}
