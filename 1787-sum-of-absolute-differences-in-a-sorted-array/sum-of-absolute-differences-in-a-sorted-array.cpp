class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        
        vector<int>v;

        int n=nums.size();

        vector<int>left(n);

        left[0]=nums[0];
    

        for(int i=1;i<n;i++)
        {
            left[i]=nums[i]+left[i-1];
        }
        

        for(int i=0;i<n;i++)
        {
            int leftSum=left[i]-nums[i];
            int rightSum=left[n-1]-left[i];

            int leftTotal=((nums[i]*i)-leftSum);
            int rightTotal=rightSum-(nums[i]*(n-i-1));
            v.push_back(leftTotal+rightTotal);
        }
        return v;
    }
};