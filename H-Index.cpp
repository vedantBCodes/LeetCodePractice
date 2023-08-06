/*

Given an array of integers citations where citations[i] 
is the number of citations a researcher received for their ith paper,
return the researcher's h-index.

According to the definition of h-index on Wikipedia: 
The h-index is defined as the maximum value of h such that 
the given researcher has published at least h papers that have each been cited at least h times.

Example 1:
Input: citations = [3,0,6,1,5]
Output: 3
Explanation: [3,0,6,1,5] means the researcher has 5 papers in total 
and each of them had received 3, 0, 6, 1, 5 citations respectively.
Since the researcher has 3 papers with at least 3 citations each and 
the remaining two with no more than 3 citations each, their h-index is 3.

Example 2:
Input : Citations = [7, 6, 5, 4, 3]
Output : 4
Explanation : There are 5 papers in total. 
Since the researcher has 4 papers with at least 4 citations each 
and the remaining one paper has less than 4 citations. So H-index is 4.

Example 3:
Input : Citations = [50,40,33,23,12,11,8,5,1,0]
Output : 7
*/

#include<iostream>
using namespace std;
 
int HIndex(int arr[],int x)
{
    int hIndex;
    int cnt;
    for(int i=x;i>=1;i--)
    {
        cnt=0;
       for(int j=0;j<x;j++)
       {
        if(arr[j]>=i)
        {
            cnt++;
        }
       }
       if(cnt>=i)
       {
        hIndex=i;
        break;
       }
    }
    return hIndex;
}
int main()
{
    int Citations[]={50,40,33,23,12,11,8,5,1,0},x=10;
    int hIndex=HIndex(Citations,x);
    cout<<hIndex;
   return 0;
}