// https://leetcode.com/problems/longest-common-prefix/description/?envType=study-plan-v2&envId=top-interview-150

class Solution {
public:
    int min(int a, int b) {
        if(a<b)
            return a;
        else
            return b;
    }
    
    string longestCommonPrefix(vector<string>& strs) {
        string c="";
        int n=INT_MAX;
        for(int i=0;i< strs.size();i++) {
            n=min(n, strs[i].size());
        }

        for(int i=0;i<n;i++) {
            char k = strs[0][i];
            for(int j=0;j<strs.size();j++) {
                if(k!=strs[j][i])
                    return c;
            }
            c+=k;
        }
        return c;
        
    }
};