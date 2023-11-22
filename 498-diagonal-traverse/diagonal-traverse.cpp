class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        
        vector<int>v;

        map<int,vector<int>>mp;

        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums[i].size();j++)
            {
                mp[i+j].push_back(nums[i][j]);
            }
        }

        int flag=0;
        for(auto it:mp)
        {
            if(flag%2==0)
            {
                reverse(it.second.begin(),it.second.end());
                v.insert(v.end(),it.second.begin(),it.second.end());
            }
            else{
                v.insert(v.end(),it.second.begin(),it.second.end());
            }
            flag++;
        }
        return v;
    }
};