class Solution {
public:
    int totalMoney(int n) {
        
        int rem=n/7;
        int mod=n%7;

        int res=0;

        int i;
        for(i=0;i<rem;i++)
        {
            int l=(i+1)+6;
            res+=(7*(i+1+l))/2;
        }

        if(mod)
        {
            int l=(i+1)+(mod-1);

            res+=(mod*(i+1+l))/2;
        }

        return res;
    }
};