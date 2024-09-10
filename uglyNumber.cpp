
/*
An ugly number is a positive integer whose prime factors are limited to 2, 3, and 5.

Example 1:

Input: n = 6
Output: true
Explanation: 6 = 2 × 3


Example 2:

Input: n = 1
Output: true
Explanation: 1 has no prime factors, therefore all of its prime factors are limited to 2, 3, and 5.


Example 3:

Input: n = 14
Output: false
Explanation: 14 is not ugly since it includes the prime factor 7.

*/

#include<iostream>
using namespace std ;

class prime
{
    private :
    int cnt;
    public :
    bool primeNumber(int num)
    {
        cnt=0;
        for(int i=2;i<num;i++)
        {
            if(num%i==0)
            {
                cnt++;
            }
        }
        if(num==2 || cnt==0)
        {
            return true;
        }
        else
        {
            return false;        }
    }
};


int main()
{
    prime obj;
    int num;
    cout<<"Enter any number to check whether it is an ugly number :";
    cin>>num;
    while(num!=1)
    {
        for(int i=2;i<=num;i++)
        {
        if(num%i==0 && obj.primeNumber(i)==true)
        {
            if(i!=2 && i!=3 && i!=5)
            {
                cout<<"False";
                exit(0);
            }
            else
            {
                num=num/i;
            }
        }
        }
    }
    cout<<"True";
    return 0;
}
