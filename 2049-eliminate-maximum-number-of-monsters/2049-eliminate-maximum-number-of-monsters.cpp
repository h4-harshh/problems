class Solution {
public:

    
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        
        int n=dist.size();
        vector<int>time(n);
        for(int i=0;i<n;i++)
        {
            time[i]=ceil((float)dist[i]/speed[i]);
        }
        // for(int i=0;i<n;i++)
        // {
        //     cout<<time[i]<<" ";
        // }
        // cout<<endl;

        sort(time.begin(),time.end());
        int time_count=1;
        int count=1;

        for(int i=1;i<n;i++)
        {
            if( time[i]-time_count <= 0)
            {
                return count;
            }
            count++;
            time_count++;
        }
        return count;
    }
};