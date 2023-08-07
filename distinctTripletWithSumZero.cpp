/*
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] 
such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.

Example 1:
Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Explanation: 
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
The distinct triplets are [-1,0,1] and [-1,-1,2].
Notice that the order of the output and the order of the triplets does not matter.

*/

#include<iostream>
using namespace std;
 
void distinctTripletWithSumZero(int arr[],int x)
{
    int emptyArray[3]={0,0,0};
    cout<<"Triplets with sum zero : [";
   for(int i=0;i<x;i++)
   {
    for(int j=i+1;j<x;j++)
    {
        for(int k=j+1;k<x;k++)
        {
            if(arr[i]+arr[j]+arr[k]==0)
            {
                int cnt=0;
                for(int l=0;l<3;l++)
                {
                    if(emptyArray[l]==arr[i] || emptyArray[l]==arr[j] || emptyArray[l]==arr[k])
                    {
                        cnt++;
                    }
                }
                if(cnt!=3)
                {
                emptyArray[0]=arr[i];
                emptyArray[1]=arr[j];
                emptyArray[2]=arr[k];
                cout<<"["<<arr[i]<<","<<arr[j]<<","<<arr[k]<<"]";
                }
            }
        }
    }
   }
   cout<<"]";
}
int main()
{
    int arr[]={-1,0,1,2,-1,-4},x=6;
    distinctTripletWithSumZero(arr,x);
   return 0;
}