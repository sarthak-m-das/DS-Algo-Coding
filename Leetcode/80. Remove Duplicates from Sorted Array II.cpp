// https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/submissions/?envType=study-plan-v2&envId=top-interview-150

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int prev = nums[0];
        int count = 1;
        int i=1;
        for(int j=1; j<nums.size(); j++){
            if(prev != nums[j]){
                nums[i] = nums[j];
                prev = nums[j];
                count =1;
                i++;
            } else if(prev == nums[j] && count<2){
                nums[i] = nums[j];
                count++;
                i++;
            }
        }

        return i;
    }
};