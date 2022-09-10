class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        int n=nums.size();
        int ans[100001]={0};
        for(int i=0; i<nums.size(); i++)
        {
            
            if(ans[nums[i]]==1)
                return nums[i];
            ans[nums[i]]++;
        }
        return -1;
    }
};