/*
88. Merge Sorted Array

You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

Example 1:

Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]
Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.

Example 2:

Input: nums1 = [1], m = 1, nums2 = [], n = 0
Output: [1]
Explanation: The arrays we are merging are [1] and [].
The result of the merge is [1].

*/
#include <iostream>
#include <vector>
using namespace std;

void mergeSortedArray(vector<int> &v1 , vector<int> &v2 , int m ,int n)
{
   int i=m-1 ; //Last valid index of v1;
   int j=n-1; //Last valid index of v2;
   int k=m+n-1; // last index of nums1 (final position);
   
   while(i>=0 && j >=0)
   {
       if(v1[i]>v2[j])
       {
           v1[k]=v1[i];
           i--;
       }
       else
       {
           v1[k]=v2[j];
           j--;
       }
       k--;
   }
   
   //If there are still remaining elemnts
    while (j >= 0) 
    {
        v1[k] = v2[j];
        j--;
        k--;
    }
}

int main() 
{
    vector<int> v1 = {1,2,3,0,0,0};
    vector<int> v2 = {2,5,6};
    int m =3; //All the non-zero elements in v1
    int n=3; //All the non-zero elements in v2
    mergeSortedArray(v1,v2,m,n);
   for(int val : v1)
   {
       cout<<val<<" ";
   }
}
