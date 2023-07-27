/*
Given an integer array arr, find the subarray with the largest sum, and return its sum.

Example 1:
Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.

Example 2:
Input: nums = [5,4,-1,7,8]
Output: 23
Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.
*/
#include<iostream>
using namespace std;
int maxSum(int arr[],int n)
{
    int sum,maxSum=0;
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=i;j<n;j++)
        {
            sum=sum+arr[j];
            if(sum>maxSum)
            {
                maxSum=sum;
            }
        }
    }
     return maxSum;
}
int main()
{
     int arr[20]={-2,1,-3,4,-1,2,1,-5,4},n=9;
     int sum=maxSum(arr,n);
     cout<<sum;
}