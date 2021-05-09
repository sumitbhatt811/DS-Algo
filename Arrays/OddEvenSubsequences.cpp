/* Given an array of integers A of size N. Find the longest subsequence of A which is odd-even.
A subsequence is said to odd-even in the following cases:
The first element of the subsequence is odd, second element is even, third element is odd and so on. For example: [5, 10, 5, 2, 1, 4], [1, 2, 3, 4, 5]
The first element of the subsequence is even, second element is odd, third element is even and so on. For example: [10, 5, 2, 1, 4, 7], [10, 1, 2, 3, 4]
Return the maximum possible length of odd-even subsequence.
Note: An array B is a subsequence of an array A if B can be obtained from A by deletion of several (possibly, zero or all) elements. */

int Solution::solve(vector<int> &A) {
    int len=A.size(),count=0,evencount=0,oddcount=0;
    vector<int> ans;
    for(int i=0;i<len;i++)
    {
        if(A[i]%2==0)
        {
            count++;
            while(A[i+1]%2==0&&i<=len-2)
                i++;
        } else
        {
            count++;
            while(A[i+1]%2!=0&&i<=len-2)
                i++;
        }
    }
    return count;
}
