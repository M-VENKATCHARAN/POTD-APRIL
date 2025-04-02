class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n=nums.size();
        vector<int>lt(n);
        vector<int>rt(n);
        for(int i=1;i<n;i++)
            lt[i]=max(lt[i-1],nums[i-1]);
        for(int i=n-2;i>=0;i--)
            rt[i]=max(rt[i+1],nums[i+1]);

        long long res=0;
        for(int i=1;i<n-1;i++)
            res=max(res,(long long)(lt[i]-nums[i])*rt[i]);
        return res;
    }
};
