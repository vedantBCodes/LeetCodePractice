/*

11. Container With Most Water
You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.
Notice that you may not slant the container.

Example 1:
Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.

Example 2:
Input: height = [1,1]
Output: 1

*/
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxArea(vector<int> v1) //Brute-Force Approach using nested loop
{
    int n=v1.size();
    int maxArea = INT_MIN;
  for(int i=0;i<n;i++)
  {
      for(int j=n-1;j>i;j--)
      {
          int area = min(v1[i],v1[j]) * (j-i) ;
          maxArea = max(area,maxArea);
      }
  }
  return maxArea;
}

int maxArea(vector<int> &height) //Optimal Approach using 2 pointers
{
    int left = 0, right = height.size() - 1;
    int maxArea = 0;

    while (left < right) {
        int area = min(height[left], height[right]) * (right - left);
        maxArea = max(maxArea, area);
        // Move the smaller pointer inward
        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }
    return maxArea;
}
int main() 
{
    vector<int> v1 = {1,8,6,2,5,4,8,3,7};
    int area = maxArea2(v1);
   cout<<"Maximum area : "<<area;
}
