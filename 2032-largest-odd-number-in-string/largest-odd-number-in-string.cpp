class Solution {
public:
    string largestOddNumber(string num) {
        
        int l=num.length()-1;
        while(l>=0)
        {
           char str=num[l];
          
            if(((str-'0')%2!=0))
            {
                return num.substr(0,l+1);
            }
            else{
                l=l-1;
            }
        }
        return "";
    }
};