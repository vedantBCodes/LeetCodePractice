/*
347. Top K Frequent Elements
Medium
Topics
premium lock icon
Companies
Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.

Example 1:

Input: nums = [1,1,1,2,2,3], k = 2
Output: [1,2]
Example 2:

Input: nums = [1], k = 1
Output: [1]
*/

#include <iostream>
#include<vector>
#include<unordered_map>
#include<queue>
using namespace std;

vector<int> topkFrequentElements(vector<int> nums, int k)
{
    unordered_map<int , int> mp ;
    for(int i : nums)
    {
        mp[i]=mp[i] + 1;
    }
    priority_queue<pair<int , int>> pq ;
    
    for(auto i : mp)
    {
        cout<<i.first<<" occurs "<<i.second<<" times"<<endl;
        pq.push({i.second , i.first});
    }
    vector<int> v1;
    for(int i=0;i<k;i++)
    {
        v1.push_back(pq.top().second);
        pq.pop();
    }
    return v1;
    
}

int main() 
{
    vector<int> nums={1,2,3,2,1,2,3,1};
    int k=2;
    vector<int> v1 = topkFrequentElements(nums,k);
    cout<<"Top "<<k<<" most frequent elements are :";
    for(int i : v1)
    {
        cout<<i<<" ";
    }
    return 0;
}


