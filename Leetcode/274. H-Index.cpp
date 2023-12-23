//https://leetcode.com/problems/h-index/description/?envType=study-plan-v2&envId=top-interview-150

lass Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end(), greater<int>());
        int result=0;
        for(int i=0;i<citations.size();i++) {
            if(citations[i]<=i+1) {
                result = max(result, citations[i]);
            } else {
                result = max(result, i+1);
            }
        }
        return result;
    }
};