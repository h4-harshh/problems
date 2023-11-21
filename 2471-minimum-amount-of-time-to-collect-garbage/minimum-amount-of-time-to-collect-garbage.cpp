class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        

        int M_idx=0;
        int P_idx=0;
        int G_idx=0;

        int total=0;

        for(int i=0;i<garbage.size();i++)
        {
            int k=garbage[i].length();

            for(int j=0;j<k;j++){

                if(garbage[i][j]=='M'){
                    M_idx=i;
                }
                if(garbage[i][j]=='P'){
                    P_idx=i;
                }
                if(garbage[i][j]=='G'){
                    G_idx=i;
                }

            } 
                total+=k;
        }
        for(int i=1;i<travel.size();i++)
        {
            travel[i]=travel[i]+travel[i-1];
        }
        total+=M_idx>0?travel[M_idx-1]:0;
        total+=P_idx>0?travel[P_idx-1]:0;
        total+=G_idx>0?travel[G_idx-1]:0;

        return total;
    }
};