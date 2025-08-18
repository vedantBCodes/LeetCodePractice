/*306. Additive Number

An additive number is a string whose digits can form an additive sequence.

A valid additive sequence should contain at least three numbers. Except for the first two numbers, each subsequent number in the sequence must be the sum of the preceding two.

Given a string containing only digits, return true if it is an additive number or false otherwise.

Note: Numbers in the additive sequence cannot have leading zeros, so sequence 1, 2, 03 or 1, 02, 3 is invalid.

 

Example 1:

Input: "112358"
Output: true
Explanation: 
The digits can form an additive sequence: 1, 1, 2, 3, 5, 8. 
1 + 1 = 2, 1 + 2 = 3, 2 + 3 = 5, 3 + 5 = 8
Example 2:

Input: "199100199"
Output: true
Explanation: 
The additive sequence is: 1, 99, 100, 199. 
1 + 99 = 100, 99 + 100 = 199
*/
#include<iostream>
#include<string>
using namespace std;

bool CheckForadditiveNumber(string str) //This will work for only single digits
{
    for(int i=2;i<str.size();i++)
    {
        int firstChar=int(str[i-1]) - int('0');
        int secondChar=int(str[i-2]) - int('0');
        int thirdChar=int(str[i]) - int('0');
        if(firstChar + secondChar != thirdChar)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string str="12358";
    if(CheckForadditiveNumber(str))
    {
        cout<<str<<" is an additive number ";
    }
    else
    {
        cout<<str<<" is not an additive number ";
    }
    return 0;
}




