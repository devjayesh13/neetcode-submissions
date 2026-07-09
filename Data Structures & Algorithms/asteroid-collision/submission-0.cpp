class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> ass;
        ass.push(asteroids[0]);
        for(int i=1;i<asteroids.size();i++){
            bool stat = true;
            while(!ass.empty() && ass.top() > 0 && asteroids[i] < 0){
                if(ass.top() > -asteroids[i]) {
                    stat = false;
                    break;
                }
                else if(ass.top() < -asteroids[i]) {
                    ass.pop();
                }
                else if(ass.top() == -asteroids[i]){
                    ass.pop();
                    stat = false;
                    break;
                }
            }
            if(stat) ass.push(asteroids[i]);
            
        }
        vector<int> res;
        while(!ass.empty()){
            res.push_back(ass.top());
            ass.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};