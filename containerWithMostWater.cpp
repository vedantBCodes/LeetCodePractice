/*
You are given an integer array height of length x. There are x vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.

*/
#include<iostream>
using namespace std;
void areaWithMostWater()
{
    int arr[20]={1,8,6,2,5,4,8,3,7};  //array of heights
    int x=9;
    int max=0;
    int temp;
    for(int i=0;i<x;i++)
    {
        for(int j=(i+1);j<x;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i]*(j-i);
                if(temp>max)
                {
                    max=temp;
                }
            }
            else
            {
                temp=arr[j]*(j-i);
                 if(temp>max)
                {
                    max=temp;
                }
            }
        }
    }
    cout<<"The maximum area water can occupy is "<<max<<" sq.unit";
}
int main()
{
     areaWithMostWater();
     return 0;
}