class Solution {
public:
    string largestGoodInteger(string num) {
        
        char maxi=' ';

        for(int i=2;i<num.length();i++)
        {
            if(num[i]==num[i-1] && num[i]==num[i-2])
            {
                maxi=max(maxi,num[i]);
            }
        }
        return maxi == ' ' ? "" : string(3, maxi);
    }
};