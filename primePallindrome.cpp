/*

Given an integer n, return the smallest prime palindrome greater than or equal to n.

An integer is prime if it has exactly two divisors: 1 and itself
. Note that 1 is not a prime number.

For example, 2, 3, 5, 7, 11, and 13 are all primes.
An integer is a palindrome if it reads the same from left to right as it does from right to left.

For example, 101 and 12321 are palindromes.
The test cases are generated so that the answer always exists and is in the range [2, 2 * 108].

Example 1:

Input: n = 6
Output: 7

Example 2:

Input: n = 8
Output: 11

Example 3:

Input: n = 13
Output: 101

*/

#include<iostream>
using namespace std;

bool isPrime(int num)
{
    bool check;
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            return false;
        }
    }
    return true;
}

int reverseNumber(int num)
{
    int num2=0;
    while(num>0)
    {
        int x=num%10;
        num2=x+(num2*10);
        num=num/10;
    }
    return num2;
}
bool isPallindrome(int num)
{
    int revNum=reverseNumber(num);
    if(revNum==num)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int num=13;
    int result;
    bool check=false;
    while(check!=true)
    {
        if(isPallindrome(num)==true && isPrime(num)==true)
        {
            check=true;
            result=num;
        }
        num++;
    }
    cout<<result;
}