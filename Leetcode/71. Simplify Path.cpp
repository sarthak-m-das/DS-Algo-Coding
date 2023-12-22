class Solution {
public:
    string simplifyPath(string path) {
        string cur="";
        stack<string> st;
        path=path+'/';

        for(int i=0;i<=path.size();i++) {
            if(path[i] =='/') {
                if(cur=="" || cur =="."){
                    cur = "";
                    continue;
                } 
                else if (cur ==".." ) {
                    cur = "";
                    if(!st.empty())
                        st.pop();
                } else {
                    st.push(cur);
                    cur = "";
                }
            } else {
                cur+=path[i];
            }
        }
        if (st.empty())
        cur="/";
        else
        cur="";
        while(!st.empty()){
            cur = "/"+st.top()+cur;
            st.pop();
        }
        return cur;
    }
};