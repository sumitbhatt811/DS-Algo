/* find the sub array of size 'k' with least average.
Return the smaller index */
int Solution::solve(vector<int> &A, int B) {
    int  s = A.size();
    vector<int> mini;
    vector<int> ps;
    ps = A;
    
    for(int i = 1; i < s; i++)
    {
        ps[i] = ps[i-1] + A[i];
    }
    
    // for(int i = 0; i < s; i++)
    // {
    //     cout << ps[i] << " ";
    // }
    // cout << endl;
    for(int i = 0; i < s - B + 1; i++)
    {
        if (i == 0)
        {
            int x = ps[B-1];
            mini.push_back(x);
        }
        else
        {
            int x=0;
            x = ps[i + B - 1] - ps[i - 1];
            mini.push_back(x);
        }
    }
    int ans = mini[0], j = 0;
    for(int i = 1; i < mini.size(); i++)
    {
        if(mini[i] < ans)
        {
            ans = mini[i];
            j = i;
        }
    }
    return j;
}
