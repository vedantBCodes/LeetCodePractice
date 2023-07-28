/*
Given a non-empty array of non-negative integers arr, 
the degree of this array is defined as the maximum frequency of any one of its elements.

Your task is to find the smallest possible length of a (contiguous) subarray of arr, that has the same degree as arr.

Example 1:
Input: arr = [1,2,2,3,1]
Output: 2
Explanation: 
The input array has a degree of 2 because both elements 1 and 2 appear twice.
Of the subarrays that have the same degree:
[1, 2, 2, 3, 1], [1, 2, 2, 3], [2, 2, 3, 1], [1, 2, 2], [2, 2, 3], [2, 2]
The shortest length is 2. So return 2.

Example 2:
Input: arr= [1,2,2,3,1,4,2]
Output: 6
Explanation: 
The degree is 3 because the element 2 is repeated 3 times.
So [2,2,3,1,4,2] is the shortest subarray, therefore returning 6.


 NOTE:This program won't be run on the array with more than 1 element having the highest occurance.
e.g arr[]={1,2,2,3,1}
*/

#include<iostream>
using namespace std;
 int arr[]={1,2,2,3,1,4,2},n=7; //Here arr is the name of array and n is it's length
 int degree,temp;
 int arr2[20];
 int maxCount=0,cnt;
void degreeOfArray()
{
   
    for(int i=0;i<n;i++)
    {
        cnt=0;
        for(int j=0;j<n;j++)
        {
           if(arr[i]==arr[j])
           {
            cnt++;
           }
        }
        if(cnt>maxCount)
        {
            maxCount=cnt;
            temp=arr[i];
        }
    }
    cout<<"The degree of a given array is:"<<maxCount<<endl;
}
void shortestSubarray()
{
    int firstAppearance,lastAppearance;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==temp)
        {
            firstAppearance=i;
            break;
        }
    }
    for(int i=(n-1);i>=0;i--)
    {
        if(arr[i]==temp)
        {
            lastAppearance=i;
            break;
        }
    }
    int len=(lastAppearance+1)-firstAppearance;
    cout<<"The smallest possible length of a (contiguous) subarray of arr, that has the same degree as arr is "<<len<<endl;
    cout<<"And the shortest subarray is:";
    for(int i=firstAppearance;i<=lastAppearance;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    degreeOfArray();
    shortestSubarray();
}