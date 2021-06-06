/* reverse the integer then return. If integer is -ve reverse abs then return negative.
if integer overflows return 0*/

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int reverse(int A)
{
    vector<int> a;
    int ans = 0;
    if (A >= 0)
    {
        while (A)
        {
            a.push_back(A % 10);
            A = A / 10;
        }
        int s = a.size();
        for (int i = s - 1; i >= 0; i--)
        {
            ans += a[i] * pow(10, s - 1 - i);
        }
        return ans;
    }
    else
    {
        int b = (-1 * A);
        while (b)
        {
            a.push_back(b % 10);
            b = b / 10;
        }
        int s = a.size();
        for (int i = s - 1; i >= 0; i--)
        {
            ans += a[i] * pow(10, s - 1 - i);
        }
        return -1 * ans;
    }
}

int main()
{
    int a = -123;
    int b = reverse(a);
    cout << b;
}
