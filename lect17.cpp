#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (target < arr[mid])
        {
            end = mid - 1;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

// binary search using recursion

int recursiveBS(vector<int> arr, int target, int start, int end){
    while(start <= end){
        int mid = start + (end-start)/2;
        if(target<arr[mid]){
            return recursiveBS(arr, target, start, mid-1);
        } else if(target>arr[mid]){
            return recursiveBS(arr, target, mid+1, end);
        } else {
            return mid;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr1 = {-1, 0, 5, 7, 9, 17, 20, 40};
    int target1 = -10;

    vector<int> arr2 = {-4, -1, 0, 5, 7, 9, 17, 20, 40};
    int target2 = -1;

    // cout << binarySearch(arr1, target1) << "\n";
    // cout << binarySearch(arr2, target2) << "\n";

    cout << recursiveBS(arr2, target2, 0, arr2.size()-1);
    return 0;
}