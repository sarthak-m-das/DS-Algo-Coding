//https://leetcode.com/problems/jump-game-ii/description/?envType=study-plan-v2&envId=top-interview-150

class Solution {
public:
    int jump(vector<int>& nums) {
        int n= nums.size();
        vector<int> places(n,INT_MAX);
        places[0]=0;
        for(int i=0;i<n;i++) {
            if(places[i]!=INT_MAX) {
                for(int j=i+1;j<n && j<=i+nums[i];j++) {
                    places[j]=min(places[i]+1, places[j]);
                }
            }
        }
        return places[n-1];
    }
};