class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char x : s){
            if(x == '(' || x == '{' || x == '[') st.push(x);
            else if(x == ')' || x == '}' || x == ']'){
                if(st.empty()) return false;
                else {
                    char t = st.top();
                    if((t == '(' && x == ')') || (t == '{' && x == '}') || (t == '[' && x == ']')) st.pop();
                    else return false;
                }
            }
        }
        return st.empty();
    }
};
