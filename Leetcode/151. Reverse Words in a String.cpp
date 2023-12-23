// https://leetcode.com/problems/reverse-words-in-a-string/description/?envType=study-plan-v2&envId=top-interview-150

class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        string c="";
        for(int i=0;i<s.size();i++) {
            if(s[i]==' ') {
                if(c!=""){
                    v.push_back(c);
                    c="";
                }
            } else{
                c+=s[i];
            }
        }

        if(c!="")
            v.push_back(c);


        s="";
        for(int i=v.size()-1;i>=0;i--) {
            s+=v[i];
            if(i!=0)
                s+=" ";
        }
        return s;
    }
};