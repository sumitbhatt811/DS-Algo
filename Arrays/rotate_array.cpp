/* Given an unsorted array arr[] of size N, rotate it by D elements (anti-clockwise).*/ 

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a;
    int n = 0, d = 0, x = 0;
    cin >> n;
    cin >> d;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a.push_back(x);
    }

    for (int i = 0; i < d; i++)
    {
        int temp = a[0];
        for (int j = 0; j < n; j++)
        {
            if (j == n - 1)
            {
                a[j] = temp;
            }
            else
            {
                a[j] = a[j + 1];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
