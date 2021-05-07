// Bubble sort
#include <iostream>
#include <vector>
using namespace std;
int *bubblesort(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int temp = 0;
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr;
}
int main()
{
    int arr[] = {1, 7, 5, 8, 3, 4, 9, 10, 11, 19, 12, 13, 2}, n;
    n = sizeof(arr) / sizeof(arr[0]);
    int *sorted;
    sorted = bubblesort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << sorted[i] << " ";
    }
}
