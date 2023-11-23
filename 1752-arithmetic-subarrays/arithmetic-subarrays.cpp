class Solution {
public:

    bool check(int i,int j,vector<int>nums)
    {
        vector<int>newv;
        newv.insert(newv.end(),nums.begin()+i,nums.begin()+j+1);
        sort(newv.begin(),newv.end());
        for(auto x:newv){
            cout<<x<<" ";
        }
        cout<<endl;
        for(int k=2;k<newv.size();k++)
        {
            if(newv[k]-newv[k-1] != newv[k-1]-newv[k-2]){
                newv.clear();
                return false;
            }
        }
        newv.clear();
        return true;
    }


    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        
        vector<bool>v;

        for(int i=0;i<r.size();i++)
        {
            v.push_back(check(l[i],r[i],nums));
        }
        return v;
    }
};