class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        
        int h=abs(sx-fx);
        int v=abs(sy-fy);

        if(h==0 && v==0 && t==1)
        {
            return false;
        }

        int min_time=max(h,v);

        if(t < min_time)
        {
            return false;
        }
        
        return true;
    }
};