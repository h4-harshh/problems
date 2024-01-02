class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
         int n = nums.size();
        vector<int> mp(n+1);
        
        vector<vector<int>>res;

        for(int &num : nums) {
            int freq = mp[num];
            
            if(freq ==res.size()) {
            res.push_back({});
            }
            
        res[freq].push_back(num);
            mp[num]++;
        }
        
        return res;
    }
};