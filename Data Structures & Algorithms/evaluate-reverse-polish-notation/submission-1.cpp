class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> val;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i] == "+"){
                int a = val.top();
                val.pop();
                int b = val.top();
                val.pop();
                val.push(a+b);
            }
            else if(tokens[i] == "-"){
                int a = val.top();
                val.pop();
                int b = val.top();
                val.pop();
                val.push(b-a);
            }
            else if(tokens[i] == "*"){
                int a = val.top();
                val.pop();
                int b = val.top();
                val.pop();
                val.push(a*b);
            }
            else if(tokens[i] == "/"){
                int a = val.top();
                val.pop();
                int b = val.top();
                val.pop();
                val.push(b/a);
            }
            else val.push(stoi(tokens[i]));
        }
        return val.top();
    }
};
