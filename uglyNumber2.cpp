
/*
An ugly number is a positive integer whose prime factors are limited to 2, 3, and 5.

Given an integer n, return the nth ugly number.

Example 1:

Input: n = 10
Output: 12
Explanation: [1, 2, 3, 4, 5, 6, 8, 9, 10, 12] is the sequence of the first 10 ugly numbers.

Example 2:

Input: n = 1
Output: 1
Explanation: 1 has no prime factors, therefore all of its prime factors are limited to 2, 3, and 5.

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
    int num,num2;
    bool check;
    int cnt=0;
    cout<<"Enter any number :";
    cin>>num2;
    int start=1;
    while(cnt!=num2)
    {
        check=true;
        num=start;
    while(num!=1)
    {   
        for(int i=2;i<=num;i++)
        {
        if(num%i==0 && obj.primeNumber(i)==true)
        {
            if(i!=2 && i!=3 && i!=5)
            {
                check=false;
                break;
            }
            else
            {
                num=num/i;
            }
        }
        }
        if(check==false)
        {
            break;
        }
    }
    if(check==true)
    {
        // cout<<start<<" ";    //printing all ugly numbers 
        cnt++;
    }
    start++;
    }
    cout<<"The "<<num2<<"th ugly number is :"<<--start;
    return 0;
}

