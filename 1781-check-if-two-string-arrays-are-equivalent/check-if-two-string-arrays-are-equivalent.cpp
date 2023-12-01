class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        
        stack<char>st;

        for(int i=0;i<word1.size();i++)
        {
            string curr_word=word1[i];
            int length=curr_word.length();
            int j=0;
            while(j<length)
            {
                st.push(curr_word[j]);
                j++;
            }
        }
        for(int i=word2.size()-1;i>=0;i--)
        {
            string curr_word=word2[i];
            int length=curr_word.length();
            int j=length-1;
            while(j>=0)
            {
                if(st.top()!=curr_word[j])
                {
                    return false;
                }
                st.pop();
                j--;
            }
        }
        if(!st.empty()) return false;
        return true;
    }
};