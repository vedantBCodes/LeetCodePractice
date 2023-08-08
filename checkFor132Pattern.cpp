/*
Given an array of n integers arr, a 132 pattern is a subsequence of three
integers arr[i], arr[j] and  arr[k] such that i < j < k and  arr[i] <  arr[k] <  arr[j].
Return true if there is a 132 pattern in  arr, otherwise, return false.

Example 1:
Input: nums = [1,2,3,4]
Output: false
Explanation: There is no 132 pattern in the sequence.

Example 2:
Input: nums = [3,1,4,2]
Output: true
Explanation: There is a 132 pattern in the sequence: [1, 4, 2].
*/
#include<iostream>
using namespace std;

bool checkFor132Pattern(int arr[],int x)
{
   for(int i=1;i<x;i++)
   {
    if((arr[i]>arr[i-1])&&(arr[i]>arr[i+1])&&(arr[i+1]>arr[i-1]))
    {
        return true;
    }
   }
   return false;
}
 
int main()
{
    int arr[]={3,1,4,2},x=4;
    bool check=checkFor132Pattern(arr,x);
    if(check==true)
    {
        cout<<"132 pattern is there in a given array";
    }
    else
    {
        cout<<"There is no 132 pattern in a given array";
    }
   
}