// Majority Element - It is the element whole occurance is more than floor(n/2) where n is the size of the vector
#include <iostream>
#include <vector>
using namespace std;
int majorityElement1(vector <int>nums)   // Brute-Force Approach
{
    for(int val : nums)
    {
        int cnt=0;
        for(int val2 : nums)
        {
            if(val==val2)
            {
                cnt++;
            }
        }
        if(cnt>(nums.size()/2))
        {
            return val;
        }
    }
    return -1;
}
int majorityElement2(vector <int> nums) //Time complexity - 0(n logn) more optimized
{
    sort(nums.begin() , nums.end());  // Sort in ascending order
    int freq=1;
    int majorityElement=nums[0];
    int n = nums.size();
    for(int i=1;i<n;i++)
    {
        if(nums[i]==nums[i-1])
        {
            freq++;
        }
        else
        {
            freq = 1;
            majorityElement=nums[i];
        }
        if(freq>n/2)
        {
            return majorityElement;
        }
    }
    return majorityElement;
}
int main () 
{
    vector<int> vect1 = {1,2,1,2,1};
    int ele = majorityElement1(vect1);
    if(ele==-1)
    {
        cout<<"No majority element";
    }
    else
    {
        cout<<"The majority element is : "<<ele;
    }
}
