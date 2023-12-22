//https://leetcode.com/problems/length-of-last-word/description/?envType=study-plan-v2&envId=top-interview-150

class Solution {
public:
    int lengthOfLastWord(string s) {
        int max=0, curlen=0;

        for(int i=0;i<s.size();i++) {
            if(s[i]==' ') {
                curlen=0;
            } else {
                curlen++;
                max=curlen;
            }
        }
        return max;
    }
};