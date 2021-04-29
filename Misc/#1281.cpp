/* Given an integer number n, return the difference between the product of its digits and the sum of its digits. */
class Solution {
public:
    int subtractProductAndSum(int n) {
        int x=1,sum=0,ans=0;
        while(n)
        {
            x=x*(n%10);
            sum=sum+(n%10);
            n=n/10;
        }
        ans=x-sum;
        return ans;
    }
};
