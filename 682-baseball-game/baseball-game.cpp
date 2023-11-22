class Solution {
public:
    int calPoints(vector<string>& operations) {
        
        stack<int>st;
        for(auto x:operations)
        {
            if(!st.empty() && x=="C")
            {
                st.pop();
            }
            else if(!st.empty() && x=="D")
            {
                int a=st.top();
                st.push(2*a);
            }
            else if(!st.empty() && x=="+")
            {
                int a=st.top();st.pop();
                int b=st.top();st.push(a);

                st.push(a+b);
            }
            else {
                st.push(stoi(x));
            }
        }
        int result=0;
        while(!st.empty()){
            result+=st.top();
            st.pop();
        }
        return result;
    }
};