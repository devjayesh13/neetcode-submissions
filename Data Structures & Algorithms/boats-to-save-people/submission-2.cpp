class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        unordered_map<int, int> freq;
        for(int x : people) freq[x]++;
        int min = *min_element(people.begin(), people.end());
        int max = *max_element(people.begin(), people.end());
        vector<int> peoples;
        for(int i=min;i<=max;i++){
            while(freq[i]--) peoples.push_back(i);
        }

        int l = 0, r = peoples.size() - 1, count = 0;
        while(l < r){
            if(peoples[l] + peoples[r] <= limit) return count + ceil(static_cast<double>(peoples.size()-count)/2);
            else{
                r--;
                count++;
            }
        }
        return count+1;
    }
};