/* Given an array A and a integer B. A pair(i,j) in the array is a good pair if i!=j and (A[i]+A[j]==B). Check if any good pair exist or not. */
int Solution::solve(vector<int> &A, int B) {
    int len=A.size(),ans=0;
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<len,j!=i;j++)
        {
            if(A[i]+A[j]==B)
                ans=1;
        }
    }
    return ans;
}
