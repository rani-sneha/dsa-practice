class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size()-1;
        int z=0, o=0, t=0;
        for(int i=0; i<=n; i++)
        {
            if(nums[i]==0)
                z++;
            if(nums[i]==1)
                o++;
            if(nums[i]==2)
                t++;
        }
        o+=z;
        t+=o;
        for(int i=0; i<=n; i++)
        {
            if(i<z)
                nums[i]=0;
            else if(i<o)
                nums[i]=1;
            else
                nums[i]=2;
        }
        // {
        //     if(nums[st]==0)
        //         st++;
        //     if(nums[en]==2)
        //         en--;
        //         if(nums[st]==2 || nums[en]==0 )
        //         {
        //             int temp=nums[st];
        //             nums[st]=nums[en];
        //             nums[en]= temp;
        //         }
        // }
    }
};