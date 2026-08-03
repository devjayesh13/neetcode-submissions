class MedianFinder {
public:
    multiset<double> nums;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        nums.insert(static_cast<double>(num));
    }
    
    double findMedian() {
        int s = nums.size();
        if (s % 2 == 0) {
            auto it1 = next(nums.begin(), s/2 - 1);
            auto it2 = next(nums.begin(), s/2);
            return (*it1 + *it2) / 2;
        } 
        else {
            auto it = next(nums.begin(), s/2);
            return *it;
        }
    }
};
