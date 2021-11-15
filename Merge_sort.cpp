#include <bits/stdc++.h>
using namespace std;
void merge(int *arr, int si, int mid, int ei)
{

    int n = mid - si + 1;
    int m = ei - mid;
    int *arr1 = new int[n];
    int *arr2 = new int[m];
    for (int i = 0; i < n; i++)
    {
        arr1[i] = arr[si + i];
    }
    for (int j = 0; j < m; j++)
    {
        arr2[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0, k = si;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = arr2[j];
            j++;
            k++;
        }
    }
    while (i < n)
    {
        arr[k] = arr1[i];
        i++;
        k++;
    }
    while (j < m)
    {
        arr[k] = arr2[j];
        j++;
        k++;
    }
}
void mergesort(int *arr, int si, int ei)
{
    if (si >= ei)
    {
        return;
    }
    int mid = (si + ei) / 2;
    mergesort(arr, si, mid);
    mergesort(arr, mid + 1, ei);
    merge(arr, si, mid, ei);
}
int main()
{
    int size;
    cin >> size;
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    mergesort(arr, 0, size - 1);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
