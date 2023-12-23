//https://leetcode.com/problems/gas-station/description/?envType=study-plan-v2&envId=top-interview-150

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        vector<int> val;

        for(int i=0;i<gas.size();i++) {
            val.push_back(gas[i]-cost[i]);
        }

        int index=0, sum=0, mid=0;

        for(int i=0;i<val.size();i++) {
            sum+=val[i];
            mid+=val[i];

            if(mid<0) {
                mid=0;
                index=i+1;
            }
        }

        return sum<0?-1:index;
    }
};