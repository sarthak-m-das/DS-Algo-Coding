class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n= nums.size();
        vector<int> places(n,0);
        places[0]=1;
        for(int i=0;i<n;i++) {
            if(places[i]==1) {
                for(int j=i+1;j<n && j<=i+nums[i];j++) {
                    places[j]=1;
                }
            }
        }
        return places[n-1]==1;
    }
};