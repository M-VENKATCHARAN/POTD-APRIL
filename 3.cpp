class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n=nums.size();
        long long ans=0;
        long long temp1=0;
        long long temp2=0;
        for(int i=0;i<n;i++){
            temp2=max(temp2,temp1*nums[i]);
            temp1=max(temp1,ans-nums[i]);
            ans=max(ans,(long long)nums[i]);
        }
        return temp2;
    }
};
