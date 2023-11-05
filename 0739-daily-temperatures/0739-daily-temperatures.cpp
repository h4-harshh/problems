class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        int n=temperatures.size();
        stack<int>st;

        vector<int>v(n);

        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && temperatures[i]>=temperatures[st.top()]){
                st.pop();
            }
            int k=st.empty()?0:(st.top()-i);
            v[i]=k;
            st.push(i);
        }
        return v;
    }
};