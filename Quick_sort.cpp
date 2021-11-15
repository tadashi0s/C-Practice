#include <bits/stdc++.h>
using namespace std;
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partition (int *arr, int low, int high) 
{ 
    int pivot = arr[high]; // pivot 
    int i = (low - 1); // Index of smaller element and indicates the right position of pivot found so far
  
    for (int j = low; j <= high - 1; j++) 
    { 
        // If current element is smaller than the pivot 
        if (arr[j] < pivot) 
        { 
            i++; // increment index of smaller element 
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 
// int partition(int *a, int st, int ed)
// {
//     int x = a[0];
//     int count = 0;
//     for (int i = 1; i <= ed; i++)
//     {
//         if (a[i] < x)
//         {
//             count++;
//         }
//     }
//     swap(&a[st + count], &x);
//     int i = st, j = ed;
//     while (i < count - 1 && j > count + 1)
//     {
//         if (a[i] < x)
//         {
//             i++;
//         }
//         else if (a[j] > x)
//         {
//             j--;
//         }
//         else
//             swap(&a[i], &a[j]);
//         i++;
//         j--;
//     }
// }
void quicksort(int *arr, int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int c = partition(arr, start, end);
    quicksort(arr, start, c - 1);
    quicksort(arr, c + 1, end);
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
    quicksort(arr, 0, size - 1);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
