// https://leetcode.com/problems/remove-element/submissions/1028047208/?envType=study-plan-v2&envId=top-interview-150

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       int i=0,j;
       for(j=nums.size()-1; i<=j;) {
           if(nums[i]==val) {
               int c=nums[i];
               nums[i]=nums[j];
               nums[j]=c;
               j--;
           }
           else {
               i++;
           }
       }
       return i; 
    }
};