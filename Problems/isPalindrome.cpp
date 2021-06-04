/* Integer is palindrome or not */
int Solution::isPalindrome(int A) {
    if(A>0)
    {
        vector<int> dig;
        int x,flag=0;
        while(A)
        {
            x=A%10;
            dig.push_back(x);
            A=A/10;
        }
        int r=dig.size()-1,l=0;
        while(l<r)
        {
            if(dig[l]!=dig[r])
            {
                flag=1;
                break;
            }
            l++;
            r--;
        }
        if(flag==0)
            return 1;
        else
            return 0;
    }
    else if(A==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
