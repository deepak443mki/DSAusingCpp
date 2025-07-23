#include <iostream>
#include <climits>
using namespace std;


// maximum subarray sum - brute force approach - O(n2)
void maxSS(int arr[], int size){
    int maxSum = 0;
    for (int i = 0; i< size; i++){
        int currentSum = 0;
        for(int j=i; j<size; j++){
            currentSum += arr[j];
            maxSum = max(maxSum, currentSum);
        }
    }

    cout << "maximum subarray sum: "<< maxSum << "\n";
}

// Kadane's Algorithm - leetcode problem(53) - maximum subarray sum problem
// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int currentSum = 0, maxSum = INT_MIN;
//         for (int num : nums) {
//             currentSum += num;
//             maxSum = max(currentSum, maxSum);
//             if(currentSum < 0) {
//                 currentSum = 0;
//             }
//         }
//         return maxSum;
//     }
// };
int maxSubArray(int nums[], int size){
    int currentSum = 0, maxSum = INT_MIN;    
    for (int i = 0; i < size; i++) {
        currentSum += nums[i];
        maxSum = max(currentSum,maxSum);
        if (currentSum < 0) {
            currentSum = 0;
        }
    }
    return maxSum;
}

int main(){
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i< n; i++){
        for(int j=i; j<n; j++){
            for(int k=i; k<=j; k++){
                cout << arr[k];
            }
            cout << " ";
        }
        cout << "\n";
    }

    maxSS(arr, n);
    cout << maxSubArray(arr, n);
    return 0;
}