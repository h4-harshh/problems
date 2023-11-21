class Solution {
public:

    int rev(int n)
    {
        int res=0;
        while(n)
        {
            int rem=n%10;
            res=res*10+rem;
            n=n/10;
        }
        return res;
    }


    int countNicePairs(vector<int>& nums) {
        
        int count=0;

        int k=1e9+7;

        unordered_map<int,int>mp;

        for(int i=0;i<nums.size();i++)
        {
            nums[i]=nums[i]-rev(nums[i]);
            if(mp.find(nums[i])!=mp.end()){
                count=(count+mp[nums[i]])%k;
            }
            mp[nums[i]]++;
        }

        return count;
    }
};