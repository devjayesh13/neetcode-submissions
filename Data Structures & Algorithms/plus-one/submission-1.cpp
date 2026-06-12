class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        long long num = 0;
        for(int i=0;i<digits.size();i++){
            num += digits[i]*pow(10, digits.size()-i-1);
        }
        num += 1;
        while(num > 0){
            ans.push_back(num%10);
            num /= 10;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
