/* Given an integer array A of size N. In one second you can increase the value of one element by 1.
Find the minimum time in seconds to make all elements of the array equal. */
int Solution::solve(vector<int> &A) {
    int len=A.size(),max=A[0],secs=0,diff=0,sum=0;
    for(int i=1;i<len;i++)
    {
        if(A[i]>max)
        {
            max=A[i];
        }
    }
    for(int i=0;i<len;i++)
    {
        diff=max-A[i];
        sum=sum+diff;
    }
    return sum;
}
