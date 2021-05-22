#include <iostream>
using namespace std;
int main()
{
    int a[6] = {1, 2, 3, 4, 5, 6};
    int p[6] = {0, 0, 0, 0, 0, 0};
    for (int i = 0; i < 6; i++)
    {
        if (i == 0)
            p[i] = a[i];
        p[i] = p[i - 1] + a[i];
    }
    for (int i = 0; i < 6; i++)
    {
        cout << p[i] << " ";
    }
}
