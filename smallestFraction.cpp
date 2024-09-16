#include<iostream>
using namespace std;

int main()
{
    int num1,num2;
    cout<<"Enter the numerator :";
    cin>>num1;
    cout<<"Enter the denominator :";
    cin>>num2;
    bool check=false;
    while(check!=true)
        {
            int temp=(num1>num2?num2:num1);
            for(int i=temp;i>=1;i--)
            {
            if(num1%i==0 && num2%i==0)
            {
                num1=num1/i;
                num2=num2/i;
                break;
            }
            if(i==2)
            {
                check=true;
            }
            }
        }
    cout<<"Smallest fraction :"<<num1<<"/"<<num2;
}