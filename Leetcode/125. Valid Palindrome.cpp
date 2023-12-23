//https://leetcode.com/problems/valid-palindrome/description/?envType=study-plan-v2&envId=top-interview-150

class Solution {
public:
    bool sanitized(int a) {
        if((a>=97 && a<=122) || (a>=48 && a<=57))
        return true;

        return false;
    }

    bool isPalindrome(string s) {
        int i=0,j=s.size()-1;

        for(int k =0;k<s.size();k++) {
            if(s[k]>=65 && s[k]<=90)
                s[k] = s[k]+32;
        }

        while(i<j) {
            if(!sanitized(s[i])) {
                i++;
            } else if(!sanitized(s[j])) {
                j--;
            } else {
                if(s[i] != s[j])
                    return false;
                i++;
                j--;
            }
        }
        return true;
    }
};