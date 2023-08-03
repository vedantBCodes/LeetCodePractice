#include<iostream>
#include<string.h>
using namespace std;

void longestWord(char str[])
{
   int len=strlen(str);
   char substring[30],tempSubstring[40];
   int substringLength=0;
   int tempLength;
   int startIndex=0;
   for(int i=0;i<=len;i++)
   {
    int x=0;
      if(str[i]==' ' || str[i]=='\0')
      {
        tempLength=i-startIndex;
      for(int j=startIndex;j<i;j++)
      {
      tempSubstring[x]=str[j];
      x++;
      }
      tempSubstring[x]='\0';
      if(tempLength>=substringLength)
      {
        substringLength=tempLength;
        strcpy(substring,tempSubstring);
      }
      startIndex=i+1;
      }
   }
   cout<<substring;
}

int main()
{
    char str[100]="I am iron man";
    longestWord(str);
}