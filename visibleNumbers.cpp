/*
Given an array of integers having n elements, 
return the numbers that occur more than floor(n/3) times in that array in increasing order.

Input :arr[]={1,2,3,2,1,2} n=6

Output: 2  because 2 occurs 3 times which is greater than (n/3) i.e 6/3=2
*/
#include<iostream>
using namespace std;
void visibleNumbers(int arr[],int n) //here arr is the array name and n is the size of array
{
    int arrCopy[10],y=0;
    int x=n/3;
    int cnt1,cnt2;
    for(int i=0;i<n;i++)
    {
        cnt1=0;
        for(int j=(i-1);j>=0;j--)
        {
            if(arr[i]==arr[j])
            {
            cnt1++;
            }
        }
        cnt2=0;
        if(cnt1==0)
        {
            for(int k=0;k<n;k++)
            {
                if(arr[i]==arr[k])
                {
                    cnt2++;
                }
            }
        }
        if(cnt2>x)
        {
            arrCopy[y]=arr[i];
            y++;
        }
       
    }
    if(y>0)
    {
        cout<<"The visible numbers are:";
        for(int i=0;i<y;i++)
        {
            cout<<arrCopy[i];
        }
    }
    else
    {
        cout<<"There are no visible Numbers in a given array:";
    }
}
int main()
{
    int arr[10]={1,2,3,2,1,1,2,1,3},Asize=9;
    /*Here i am not taking user input, if you want to take user input then you can take it by commenting
    out the below code.*/
    /*cout<<"Enter the size of array:";
    cin>>Asize;
    cout<<"Enter any "<<Asize<<" array elements:";
    for(int i=0;i<Asize;i++)
    {
       cin>>arr[i];
    }*/
    visibleNumbers(arr,Asize);
}