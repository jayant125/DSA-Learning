// https://leetcode.com/problems/valid-parentheses/submissions/1678069307/
#include<bits/stdc++.h>
using namespace std;
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++)
        {
            // Opening
            if(s[i]=='('||s[i]=='['||s[i]=='{')
            st.push(s[i]);
            // closing
            else
            {
                // empty hai ya nahi
                if(st.empty())
                return 0;
                // )
                else if(s[i]==')')
                {
                    if(st.top()!='(')
                    return 0;
                    else
                    st.pop();
                }
                // }
                else if(s[i]=='}')
                {
                    if(st.top()!='{')
                    return 0;
                    else
                    st.pop();
                }
                // ]
                else
                {
                    if(st.top()!='[')
                    return 0;
                    else
                    st.pop();
                }
            }
        }

        return st.empty();
}
int main(){
  string s = "(((())))";
  cout<<isValid(s)<<endl;
  return 0;
}
