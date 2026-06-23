class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> st;
        for(int i = 0;i<operations.size();i++){
            if(operations[i] == "+") st.push_back(st.back() + st[st.size()-2]);
            else if(operations[i] == "C") st.pop_back();
            else if(operations[i] == "D") st.push_back(st.back() * 2);
            else st.push_back(stoi(operations[i]));
        }
        int s = 0;
        for(int i = 0;i<st.size();i++) s += st[i];
        return s;
    }
};