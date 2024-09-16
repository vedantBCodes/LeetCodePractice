/*

Given a list of 24-hour clock time points in "HH:MM" format, return the minimum minutes difference between any two time-points in the list.
 

Example 1:

Input: timePoints = ["23:59","00:00"]
Output: 1
Example 2:

Input: timePoints = ["00:00","22:00"]
Output: 60

*/

#include<iostream>
using namespace std;
 

void minTimeDifference(string start,string end)
{
    int start1=stoi(start.substr(0,2));  //stoi converts string to integer
    int start2=stoi(start.substr(3,5));
    int end1=stoi(end.substr(0,2));
    int end2=stoi(end.substr(3,5));
    if(end2<start2)
    {
        end2=end2+60;
        end1=end1-1;
    }
    int diff1=end1-start1;
    int diff2=end2-start2;
    int minutes=abs(diff1*60 + diff2);
    cout<<minutes<<" minutes";
}
int main()
{
    string start="15:30";
    string end="17:15";
    minTimeDifference(start,end);

   return 0;
}