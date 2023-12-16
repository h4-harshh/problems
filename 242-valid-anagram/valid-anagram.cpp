class Solution {
public:
    bool isAnagram(string s, string t) {
        
        int n=s.length();
        int m=t.length();
        if(n!=m)
        {
            return false;
        }

        int count[26]={0};
        for(int i=0;i<n;i++)
        {
            count[(int)s[i]-(int)'a']++;
            count[(int)t[i]-(int)'a']--;
        }

        for(int i=0;i<26;i++)
        {
            if(count[i]!=0)
            {
                return false;
            }
        }
        return true;
    }
};