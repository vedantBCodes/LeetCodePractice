/*
Given a string str consisting of words and spaces, return the length of the last word in the string.

A word is a maximal substring consisting of non-space characters only.

Example 1:
Input: s = "   fly me   to   the moon  "
Output: 4
Explanation: The last word is "moon" with length 4.
*/

#include<iostream>
#include<string.h>
using namespace std;
 
int lengthOfLastWord(char str[])
{
    int len=strlen(str);
    int len2;
    int j=-1;
    for(int i=0;i<len;i++)
    {
        if(str[i]==' ')        
        {
           j=i;
        }
        if(i==(len-1))
        {
           len2=i-j;
        }
    }
     return len2; 
}

int main()
{
    char str[50];
    cout<<"Enter a string:";
    cin.getline(str,50);
    int len;
    len=lengthOfLastWord(str);
    cout<<"The length of last word in a sentense is:"<<len;
   return 0;
}