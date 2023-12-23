//https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/?envType=study-plan-v2&envId=top-interview-150

class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.size()<needle.size())
        return -1;

        int f=0;

        for(int i=0;i<=haystack.size()-needle.size();i++) {
            f=0;
            for(int j=0, k=i;j<needle.size();j++,k++) {
                if(haystack[k] != needle[j]) {
                    f=1;
                    break;
                }
            }
            if(f==0)
                return i;
        }
        return -1;
    }
};