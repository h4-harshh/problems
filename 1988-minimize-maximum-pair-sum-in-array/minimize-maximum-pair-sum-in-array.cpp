class Solution {
public:
    int minPairSum(vector<int>& nums) {
        
        // Arrays.sort(nums);
        sort(nums.begin(),nums.end());

        int maxResult=0;

        int i=0,j=nums.size()-1;

        while(i<j){
            int sum=nums[i]+nums[j];

            maxResult=max(maxResult,sum);
            i++;
            j--;
        }
        return maxResult;
    }
};