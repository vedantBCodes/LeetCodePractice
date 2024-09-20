/*
The Hamming distance between two integers is the number of positions at which the corresponding bits are different.

Given an integer array nums, return the sum of Hamming distances between all the pairs of the integers in nums.

Example 1:

Input: nums = [4,14,2]
Output: 6

Explanation: In binary representation, the 4 is 0100, 14 is 1110, and 2 is 0010 (just
showing the four bits relevant in this case).
The answer will be:
HammingDistance(4, 14) + HammingDistance(4, 2) + HammingDistance(14, 2) = 2 + 2 + 2 = 6.


Example 2:

Input: nums = [4,14,4]
Output: 4
*/

#include <iostream>
#include <array>
using namespace std;

int decimalToBinary(int num)
{
    int i = 1, no, rem, y = 0;
    while (num > 0)
    {
        rem = num % 2;
        y = y + (rem * i);
        num = num / 2;
        i = i * 10;
    }
    return y;
}

int sizeCalculator(int num)
{
    int cnt=0;
    while(num>0)
    {
        num=num/10;
        cnt++;
    }
    return cnt;
}
int diffInBinarybits(int num1, int num2)
{
    int cnt=0;
    int size1=sizeCalculator(num1);
    int size2=sizeCalculator(num2);
    int largestSize=(size1>size2)?size1:size2 ;
    int sizeCount=0 ;
    while(sizeCount!=largestSize)
    {
        int bit1=num1%10;
        int bit2=num2%10;
        if(bit1!=bit2)
        {
            cnt++;
        }
        sizeCount++;
        num1=num1/10 ;
        num2=num2/10 ;
    }
    return cnt;
}

int main()
{
    int arr[] = {4, 14, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        int binaryNum1 = decimalToBinary(arr[i]) for (int j = i + 1; j < size; j++)
        {
            int binaryNum2 = decimalToBinary(arr[j]);
        }
    }
}
