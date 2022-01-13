class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int index; 
        int start = 0; 
        int end = arr.size()-1; 
        while (start <=  end)
        {
            int mid = start + (end - start)/2; 
            if (arr[mid] > arr[mid+1] && arr[mid-1] < arr[mid] )
            {
                index = mid; 
                break; 
            }
            else if (arr[mid] < arr[mid+1])
            {
                start = mid+1; 
            }
            else 
            {
                end = mid-1; 
            }
        }
        return index; 
    }
};
