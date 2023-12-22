//https://leetcode.com/problems/majority-element/submissions/?envType=study-plan-v2&envId=top-interview-150
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> m;

        for(auto it=nums.begin();it!=nums.end(); it++) {
            m[*it]++;
        }

        map<int,int>::iterator i = m.begin();
        while(i!=m.end()) {
            if(i->second>nums.size()/2)
                return i->first;
            i++;
        }
        return 0;
    }
};