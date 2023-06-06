class Solution
{
public:
    int help(int n, int *dp)
    {

        if (dp[n] != -1)
            return dp[n];
        
dp[n]=help(n-1,dp)+help(n-2,dp);
        return  dp[n];
    }

    int climbStairs(int n)
    {
        int *dp = new int[n + 1];
        for (int i = 0; i < n + 1; i++)
            dp[i] = -1;

        dp[0] = 1;
        dp[1] = 1;
        return help(n, dp);

    }
};