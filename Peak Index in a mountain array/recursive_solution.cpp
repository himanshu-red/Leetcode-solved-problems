class Solution {
public:
    int peak(vector<int>&arr, int s, int e)
    {
        int mid = s + (e - s) / 2; 
        if (arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]) return mid; 
        if (arr[mid] >= arr[mid-1]) return peak(arr, mid+1, e); 
        return peak(arr, s, mid); 
    }
    int peakIndexInMountainArray(vector<int>& arr) {
        return peak(arr, 0, arr.size()-1); 
    }
};
