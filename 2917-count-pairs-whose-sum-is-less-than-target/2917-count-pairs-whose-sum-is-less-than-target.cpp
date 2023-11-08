class Solution {
public:
    int countPairs(vector<int>& arr, int target) {
        // int count=0;
        // for(int i=0;i<arr.size()-1;i++)
        // {
        //     for(int j=i+1;j<arr.size();j++)
        //     {
        //         if((arr[i]+arr[j])<target)
        //         {
        //             count++;
        //         }
        //     }
        // }
        // return count;


        sort(arr.begin(),arr.end());
        int low=0;
        int high=arr.size()-1;
        int count=0;
        while(low<high)
        {
            if((arr[low]+arr[high])<target)
            {
                count+=high-low;
                low++;
            }
            else{
                high--;
            }
        }
        return count;
    }
};