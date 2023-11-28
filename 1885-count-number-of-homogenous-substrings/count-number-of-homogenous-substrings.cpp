class Solution {
public:

    //add 1 to result for each distinct value start traversing from 1
    //and in case of match find length of homogeneous and add that value to res
    int countHomogenous(string s) {
        
        int MOD=1e9+7;

        int n=s.length();

        int result=0;
        int length=0;

        for(int i=0;i<n;i++)
        {
            if(i>0 && s[i] == s[i-1])
            {
                length++;
            }
            else{
                length=1;
            }
            result=(result+ length) %MOD;
        }
        return result;
    }
};