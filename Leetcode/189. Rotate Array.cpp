//https://leetcode.com/problems/rotate-array/description/?envType=study-plan-v2&envId=top-interview-150

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> result;
        k=k%nums.size();
        for(int i=nums.size()-k;i<nums.size();i++){
            result.push_back(nums[i]);
        }
        for(int i=0;i<nums.size()-k;i++){
            result.push_back(nums[i]);
        }
        nums=result;
    }
};