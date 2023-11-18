class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        
        sort(nums.begin(),nums.end());

        int res=0;
        int n=nums.size();

        
        int i=0;
        long curr_sum=0;

        for(int ind=0;ind<n;ind++){
            long target=nums[ind];
            curr_sum+=nums[ind];
            
            while((ind-i+1)*target-curr_sum>k){
                curr_sum-=nums[i];
                i++;
            }
            res=max(res,ind-i+1);
        }
        return res;
    }
};