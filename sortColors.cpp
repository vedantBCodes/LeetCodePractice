/*
75. Sort Colors
Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.

Example 1:

Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
Example 2:

Input: nums = [2,0,1]
Output: [0,1,2]
*/
#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int> &v1) //Brute-Force Approach using nested loop
{
  for(int i=0;i<v1.size();i++)
  {
      int val=v1[i];
      if(val==0)
      {
          v1.erase(v1.begin() + i);
          v1.insert(v1.begin(),val);
      }
      else if(val==2)
      {
          v1.erase(v1.begin() + i);
          v1.push_back(val);
      }
  }
}
void sortColors2(vector<int> &v1) //Better Appraoch with O(n) time compelxity
{
    int zeros=0;
    int Ones=0;
    int Twos=0;
  for(int i=0;i<v1.size();i++)
  {
     if(v1[i]==0)
     {
         zeros++;
     }
     else if(v1[i]==1)
     {
         Ones++;
     }
     else
     {
         Twos++;
     }
  }
  int x=0;
  while(zeros!=0)
  {
      v1[x]=0;
      x++;
      zeros--;
  }
  while(Ones!=0)
  {
      v1[x]=1;
      x++;
      Ones--;
  }
  while(Twos!=0)
  {
      v1[x]=2;
      x++;
      Twos--;
  }
}

int main() 
{
    vector<int> v1 = {2,0,1};
    sortColors2(v1);
    for(int i : v1)
    {
        cout<<i<<" ";
    }
}
