class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<2)
            return 1;
        int idx=1;
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i-1]==nums[i]){
                nums.erase(nums.begin() + idx); 
                i--;
            }
            else
                idx++;
        }
        return nums.size();
    }
};