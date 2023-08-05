#include<iostream>
using namespace std;
 
void fizzBuzz(int num)
{
    cout<<"The first "<<num<<" FizzBuzz words are ";
    for(int i=1;i<=num;i++)
    {
        if(i%3==0 && i%5==0)
        {
            cout<<"FizzBuzz"<<" ";
        }
        else if(i%3==0)
        {
            cout<<"Fizz"<<" ";
        }
        else if(i%5==0)
        {
            cout<<"Buzz"<<" ";
        }
        else
        {
            cout<<i<<" ";
        }
    }
}
int main()
{
   fizzBuzz(15);
   return 0;
}