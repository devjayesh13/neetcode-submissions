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
            auto it1 = std::next(nums.begin(), s / 2 - 1);
            auto it2 = std::next(nums.begin(), s / 2);
            return (*it1 + *it2) / 2.0;
        } else {
            auto it = std::next(nums.begin(), s / 2);
            return *it;
        }
    }
};
