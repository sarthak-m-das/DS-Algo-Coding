// https://leetcode.com/problems/merge-sorted-array/submissions/?envType=study-plan-v2&envId=top-interview-150

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> result;

        for(int i=0,j=0; i<m || j<n; ) {
            if(i==m) {
                result.push_back(nums2[j++]);
            } else if (j==n) {
                result.push_back(nums1[i++]);
            } else {
                if(nums1[i] < nums2[j]) {
                    result.push_back(nums1[i++]);
                } else {
                    result.push_back(nums2[j++]);
                } 
            }
        }
        nums1 = result;
    }
};