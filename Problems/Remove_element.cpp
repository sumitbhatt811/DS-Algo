/*Given an integer array A of size N. In one operation, you can remove any element from the array, and the cost of this operation is the sum of all elements in the array present before this operation.
Find the minimum cost to remove all elements from the array. */

int Solution::solve(vector<int> &A) {
    sort(A.begin(),A.end());
    int s=A.size(),cost=0;
    for(int i=s-1;i>=0;i--)
    {
        for(int j=0;j<=i;j++)
        {
            cost=cost+A[j];
        }
    }
    return cost;
}
