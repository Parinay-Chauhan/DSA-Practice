/*
=========================================================
Platform      : LeetCode
Problem ID    : LC-0852
Problem       : Peak Index in a Mountain Array
Topic         : Arrays, Binary Search
Difficulty    : Medium
Approach      : Binary Search on Mountain Array or Modified Binary Search
Time          : O(log n)
Space         : O(1)
Note          : Solution is stored in the original platform submission format.
=========================================================
*/



class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s = 0;
        int e = arr.size() - 1 ;

        int mid = s + (e - s)/2;

        while(s<e){
            if(arr[mid] < arr[mid + 1]){
                s = mid + 1;
            }
            else {
                e = mid;
            }
            mid = s + (e - s)/2;

        }
        return s;
     
        
    }
};