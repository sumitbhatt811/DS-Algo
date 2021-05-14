#include <iostream>
using namespace std;
int main()
{
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (int i = 0; i < 3; i++)
    {
        int start = 0, end = 2;
        for (int j = 0; j < 3; j++)
        {
            while (start < end)
            {
                int temp = a[i][start];
                a[i][start] = a[i][end];
                a[i][end] = temp;
                start++;
                end--;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
