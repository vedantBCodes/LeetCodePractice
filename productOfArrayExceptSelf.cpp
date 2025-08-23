/*
238. Product of Array Except Self

Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.

Example 1:

Input: nums = [1,2,3,4]
Output: [24,12,8,6]
Example 2:

Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> productOfArrayExceptSelf(vector<int> nums)  //Brute-Force Approach
{
    vector<int> ans;
    int n=nums.size();
   
    for (int i = 0; i < n; i++)
    {
         int sum = 1;
        for (int j = 0; j < n; j++)
        {
            if (j != i)
            {
                sum = sum * nums[j];
            }
        }
        ans.push_back(sum);
    }
    return ans;
}

vector<int> productOfArrayExceptSelf2(vector<int>& nums)  // Optimal Approach
{
    int n = nums.size();
    vector<int> result(n, 1);

    // Compute prefix products
    int prefix = 1;
    for (int i = 0; i < n; i++) {
        result[i] = prefix;
        prefix *= nums[i];
    }

    // Compute suffix products and multiply with prefix
    int suffix = 1;
    for (int i = n - 1; i >= 0; i--) {
        result[i] *= suffix;
        suffix *= nums[i];
    }

    return result;
}

vector<int> productOfArrayExceptSelf3(vector<int>& nums)  // Optimal Approach
{
    int n = nums.size();
    vector<int> ans(n, 1);

    int prefix=1;
    for(int i=0;i<n;i++)
    {
        ans[i]=prefix;
        prefix=prefix*nums[i];
    }
    int suffix=1;
    for(int i=n-1;i>=0;i--)
    {
        ans[i]=ans[i]*suffix;
        suffix=suffix*nums[i];
    }
    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4};
    vector<int> ans = productOfArrayExceptSelf3(nums);
    for (int val : ans)
    {
        cout << val << " ";
    }
    return 0;
}