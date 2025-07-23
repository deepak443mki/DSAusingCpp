#include <iostream>
#include <climits>
#include <vector>
using namespace std;

// pair sum - brute force approach
void pairSum(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > target)
        {
            continue;
        }
        else
        {
            for (int j = i + 1; j < size; j++)
            {
                if (arr[j] > target)
                {
                    continue;
                }
                else if (arr[i] + arr[j] == target)
                {
                    cout << i << j;
                }
            }
            cout << "\n";
        }
    }
}

vector<int> pairSumV(vector<int> nums, int target) {
    vector<int> ans;
    int size = nums.size();
    for (int i = 0; i < size; i++) 
    {
        for (int j = i+1; j < size; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
            
        }
        
    }
    return ans;
    
}

vector<int> pairSumO (vector<int> nums, int target) {
    vector<int> ans;
    int n = nums.size();
    int i=0, j=n-1, ps;
    while(i<j){
        ps = nums[i] + nums[j];
        if (ps<target)
        {
           i++; 
        } else if (ps>target)
        {
            j--;
        } else {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
        
        
    }
    return ans;
}

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        for(int num: nums){
            int count =0;
            for (int ele : nums){
                if(num==ele){
                    count++;
                }
            }
            if(count>n/2){
                return num;
            }
        }
        return -1;
    }
    
}; 


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        // sort 
        sort(nums.begin(), nums.end());

        int count=1, ans = nums[0];
        for(int i=1; i<n; i++){
            if(nums[i]==nums[i-1]){
                count++;
            } else {
                count=1;
                ans = nums[i];
            }
            if(count>n/2){
                return ans;
            }
        }
        return ans;
    }
    
};

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count = 0, ans = 0;
        for(int i=0; i<n; i++) {
            if(count==0){
                ans = nums[i];
            }
            if(ans==nums[i]){
                count++;
            } else {
                count--;
            }
        }
        return ans;
    }
    
};

int main()
{
    // int size = 6;
    // int arr[6] = {2, 7, 11, 1, 15, 8};
    // int target = 9;
    // pairSum(arr, size, target);

    vector<int> nums = {2, 7, 11, 15};
    vector<int> ans =  pairSumV(nums, 9);
    vector<int> ans2 =  pairSumO(nums, 26);
    cout << ans[0] << ", " << ans[1] <<"\n";
    cout << ans2[0] << ", " << ans2[1] <<"\n";

   
    return 0;
}