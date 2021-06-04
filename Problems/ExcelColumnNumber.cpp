int Solution::titleToNumber(string A) {
    int l=A.length(),ans=0;
    for(int i=l-1;i>=0;i--)
    {
        ans=ans+pow(26,i)*((int)A[l-1-i]-'A'+1);
    }
    return ans;
}
