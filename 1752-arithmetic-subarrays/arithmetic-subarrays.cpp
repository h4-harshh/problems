class Solution {
public:

    bool check(int i,int j,vector<int>nums)
    {
        vector<int>newv;

        unordered_set<int>s;
        newv.insert(newv.end(),nums.begin()+i,nums.begin()+j+1);
        int a=*min_element(newv.begin(),newv.end());
        int b=*max_element(newv.begin(),newv.end());

        int n=newv.size();

        for(int k=0;k<newv.size();k++)
        {
            s.insert(newv[k]);
        }

        if((b-a)%(n-1) != 0)
        {
            return false;
        }

        int d=(b-a)/(n-1);       

        int curr=a+d;

        while(curr < b)
        {
            if(s.find(curr)==s.end())
            {
                return false;
            }
            curr=curr+d;
        }
        newv.clear();
        s.clear();
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