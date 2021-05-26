/* Given an array of integers A of size, N. Minimize the absolute difference between the maximum and minimum element of the array.
You can perform two types of operations at most B times in total to change the values in the array.
Multiple operations can be performed on the same element.
Increment : A[i] -> A[i] + 1.
Decrement : A[i] -> A[i] - 1.
Return the minimum difference possible.*/
int Solution::solve(vector<int> &A, int B) {
    sort(A.begin(),A.end());
    int mi=A[0],ma=A[0],s=A.size();
    unordered_map <int,int> freq;
    for(int i=0;i<s;i++)
    {
        mi=min(A[i],mi);
        ma=max(A[i],ma);
        freq[A[i]]++;
    }
    while(mi<ma&&B!=0)
    {
        if(freq[mi]<freq[ma])
        {
            if(B<freq[mi])
                break;
            freq[mi+1]=freq[mi+1]+freq[mi];
            B=B-freq[mi];
            mi++;
        }
        else
        {
            if(B<freq[ma])
                break;
            freq[ma-1]=freq[ma-1]+freq[ma];
            B=B-freq[ma];
            ma--;
        }
    }
    return abs(ma-mi);
}
