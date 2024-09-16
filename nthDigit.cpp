/*
Given an integer n, return the nth digit of the infinite integer sequence [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, ...].

Example 1:

Input: n = 3
Output: 3

Example 2:

Input: n = 11
Output: 0
Explanation: The 11th digit of the sequence 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, ... is a 0, which is part of the number 10.
*/

#include<iostream>
using namespace std;
 
int reverseNumber(int num) 
{
    int temp = 0;
    while (num != 0) {
        int remainder = num % 10;
        temp = temp * 10 + remainder;
        num = num / 10;
    }
    return temp;
}
int digitCounter(int num)
{
    int cnt=0;
    while(num>0)
    {
        int temp=num%10;
        cnt++;
        num=num/10;
    }
    return cnt;
}
int main()
{
    int n,cnt;
    cout<<"Enter a value :";
    cin>>n;
    if(n<10)
    {
        cout<<n;
        exit(0);
    }
    cnt=9;
    int num=10;
    while(cnt!=n)
    {
   int digits = digitCounter(num);
   int tempNum=num;
   for(int i=digits-1;i>=0;i--)
   {
    int x=pow(10,i);
    int temp=tempNum / x;
    cnt++;
    if(cnt==n)
    {
        cout<<temp;
        exit(0);
    }
    tempNum = tempNum % x;
   }
   num++;
    }

   return 0;
}