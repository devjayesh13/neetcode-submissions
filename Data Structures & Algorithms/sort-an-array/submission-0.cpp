class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);
        return nums;
    }
    void mergeSort(vector<int> &arr, int l, int r){
        if(l < r){
            int m = l + (r - l)/2;
            sort(arr.begin() + l, arr.begin() + r + 1);
            sort(arr.begin() + m + 1, arr.begin() + r);
            merge(arr, l, m, r);
        }
    }
    void merge(vector<int> &arr, int l, int m, int r){
        int n1 = m-l+1, n2 = r-m;
        vector<int> L(n1), R(n2);
        for(int i=0;i<n1;i++) L[i] = arr[l+i];
        for(int i=0;i<n2;i++) R[i] = arr[m+i+1];
        int i = 0, j = 0, k = l;
        while(i < n1 && j < n2){
            if(L[i] <= R[j]) arr[k++] = L[i++];
            else arr[k++] = R[j++];
        }
        while(i < n1) arr[k++] = L[i++];
        while(j < n2) arr[k++] = R[j++];
    }
};