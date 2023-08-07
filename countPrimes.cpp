/*
Given an integer n, return the number of prime numbers that are strictly less than n.

Example 1:
Input: n = 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
*/
#include<iostream>
using namespace std;
 
int countPrimes(int num)
{
   int cntNum=0;
   for(int i=2;i<num;i++)
   {
    int cnt=0;
    for(int j=2;j<i;j++)
    {
        if(i%j==0)
        {
           cnt++;
        }
    }
    if(cnt==0)
    {
        cntNum++;
    }
   }
   return cntNum;
} 

int main()
{
    int num;
    cout<<"Enter a number:";
    cin>>num;
    int cnt=countPrimes(num);
    cout<<cnt;
   return 0;
}