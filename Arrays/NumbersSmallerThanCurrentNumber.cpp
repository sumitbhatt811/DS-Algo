/* Given the array nums, for each nums[i] find out how many numbers in the array are smaller than it.
That is, for each nums[i] you have to count the number of valid j's such that j != i and nums[j] < nums[i].
Return the answer in an array.*/

#include<bits/stdc++.h>
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            ans.push_back(0);
            for(int j=0;j<nums.size();j++)
            {
                if(nums[i]>nums[j])
                {
                    ans[i]++;
                }
            }
        }
        return ans;
    }
};
