class Solution {
public:

    vector<int>find_nsl(vector<int>&v)
    {
        vector<int>v1;
        stack<int>st;
        for(int i=0;i<v.size();i++)
        {
            while(!st.empty() && v[st.top()]>v[i])
            {
                st.pop();
            }
            int k=st.empty()?-1:st.top();
            v1.push_back(k);
            st.push(i);
        }
        return v1;
    }

    vector<int>find_nsr(vector<int>&v)
    {
        int n=v.size();
        vector<int>v1(n);
        stack<int>st;
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && v[st.top()]>=v[i])
            {
                st.pop();
            }
            int k=st.empty()?n:st.top();
            v1[i]=k;
            st.push(i);
        }
        return v1;
    }


    int sumSubarrayMins(vector<int>& arr) {
        
        vector<int>nsl=find_nsl(arr);
        vector<int>nsr=find_nsr(arr);
        long long sum=0;
        int m=1e9+7;
        for(int i=0;i<arr.size();i++)
        {
            long long ls=(i-nsl[i]);
            long long rs=(nsr[i]-i);

            long long total_subarray=ls*rs;

            long long total_sum=arr[i]*total_subarray;
            sum=(sum+total_sum)%m;
        }
        return sum;
    }
};