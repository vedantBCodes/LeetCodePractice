/*
Given an integer array arr and an integer num, remove all occurrences of num in arr in-place. 
The order of the elements may be changed. Then return the number of elements in arr which are 
not equal to num.

Consider the number of elements in arr which are not equal to num be k, to get accepted, you need to do the following things:

Change the array arr such that the first k elements of arr contain the elements which are not equal to num. The remaining elements of arr are not important as well as the size of nums.
Return k.
*/
#include<iostream>
using namespace std;
class ArrayManipulation
{
    private:
    int i,j,k;
    public:
    int removeElements(int arr[],int size,int num)
    {
       for(i=0;i<size;i++)
       {
        if(arr[i]==num)
        {
            for(j=i;j<size;j++)
            {
                arr[j]=arr[j+1];
            }
            size--;
        }
       }
       k=size;
       return k;
       /*cout<<"\nThe remaining array elements are:";
       for(int i=0;i<k;i++)
       {
        cout<<arr[i]<<" ";
       }
       */
    }
};
int main()
{
    int arr[15],num,x;
    cout<<"Enter the size of array:";
    cin>>x;
    cout<<"Enter any "<<x<<" elements(including duplicate):";
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    cout<<"Which array elements you want to remove:";
    cin>>num;
    ArrayManipulation obj;
    int k=obj.removeElements(arr,x,num);
    cout<<"k="<<k;
}