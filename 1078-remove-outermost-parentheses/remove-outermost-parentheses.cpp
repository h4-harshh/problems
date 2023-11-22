class Solution {
public:
    string removeOuterParentheses(string s) {
        
        string result;

        int opened=0;

        for(char c:s)
        {
            if(c=='(' && opened++>0) result+=c;
            if(c==')' && opened-->1) result+=c;
        }
        return result;
    }
};