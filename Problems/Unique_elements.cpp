/* You are given an array A of N elements. You have to make all elements unique, to do so in one step you can increase any number by one.
Find the minimum number of steps.*/

int Solution::solve(vector<int> &A) {
    sort(A.begin(),A.end());
    int s=A.size(),x=0,steps=0;
    x=A[0]+1;
    for(int i=1;i<s;i++)
    {
        if(A[i]<x)
        {
            steps=steps+x-A[i];
            x=x+1;
        }
        else
        {
            x=A[i]+1;
        }
    }
    return steps;
}
