class Solution {
public:
    int hammingWeight(uint32_t n) {
        
        int count=0;
        int k=32;
        while(k--)
        {
            if(n&1==1)
            {
                count++;
            }
            n=n>>1;
        }
        return count;
    }
};