/*
Given a sorted array of distinct integers and a target value, 
return the index if the target is found. 
If not, return the index where it would be if it were inserted in order.

Input: nums = [1,3,5,6], target = 5
Output: 2

Input: nums = [1,3,5,6], target = 2
Output: 1

Input: nums = [1,3,5,6], target = 7
Output: 4
*/
#include<iostream>
using namespace std;
class searchInsertPosition
{
    private:
    int i;
    public:
    int search(int arr[],int size,int target)
    {
        for(int i=0;i<size;i++)
        {
            if(arr[i]==target)
            {
                return i;
            }
        }
        for(int i=0;i<size;i++)
        {
            if(arr[i]>target)
            {
                return i;
            }
        }
        return size;
        
    }
};
int main()
{
    int arr[20]={1,3,5,7,11,17,25},size=7,target=14;
    int targetIndex;
    searchInsertPosition obj;
    targetIndex=obj.search(arr,size,target);
    cout<<targetIndex;
    return 0;
}