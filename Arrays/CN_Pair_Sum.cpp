/*
=========================================================
Platform      : Coding Ninjas
Problem       : Pair Sum
Topic         : Arrays
Difficulty    : Easy
Approach      : Brute Force Approach
Time          : O(n²) || O(n² + k log k)
Space         : O(k) (k = number of valid pairs)
Note          : Solution is stored in the original platform submission format.
=========================================================
*/


#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> findTriplets(vector<int> arr, int n, int K){
     vector<vector<int>> ans; sort(arr.begin(), arr.end()); for(int i = 0; i < n - 2; i++) { if(i > 0 && arr[i] == arr[i - 1]) continue; int left = i + 1; int right = n - 1; while(left < right) { int sum = arr[i] + arr[left] + arr[right]; if(sum == K) { ans.push_back({arr[i], arr[left], arr[right]}); while(left < right && arr[left] == arr[left + 1]) left++; while(left < right && arr[right] == arr[right - 1]) right--; left++; right--; } else if(sum < K) left++; else right--; } } return ans; }