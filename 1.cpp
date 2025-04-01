class Solution {
public:
    int m;
    long long solve(int i,vector<vector<int>>& q,vector<long long>&dp){
        if(i>=m || i<0 )return 0;
        if(dp[i]!=-1)return dp[i];
        long long t=q[i][0]+solve(i+q[i][1]+1,q,dp);
        long long nt=solve(i+1,q,dp);
        return dp[i]=max(t,nt);
    }

    long long mostPoints(vector<vector<int>>& q) {
        m=q.size();
        vector<long long>dp(m,-1);
        return solve(0,q,dp);
    }
};
