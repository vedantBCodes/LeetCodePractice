/*
Given an m x n matrix, return all elements of the matrix in spiral order.

Example 1:

Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]

Example 2:

Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
Output: [1,2,3,4,8,12,11,10,9,5,6,7]
*/
#include <iostream>
using namespace std;

int main() 
{
    int row=3,col=4;
    int arr[row][col]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int startingRow=0;
    int startingCol=0;
    int endingRow=row-1;
    int endingCol=col-1;
    
    int total=row*col;
    int index=0;
    
    while(index<total)
    {
        // Printing starting row
        for(int i=startingCol; index < total && i<=endingCol;i++)
        {
            cout<<arr[startingRow][i]<<" ";
            index++;
        }
        startingRow++;
        
        // Printing ending column
        for(int j=startingRow; index < total && j<=endingRow;j++)
        {
            cout<<arr[j][endingCol]<<" ";
            index++;
        }
        endingCol--;
        
        // Printing ending row
        for(int k=endingCol; index < total && k>=startingCol;k--)
        {
            cout<<arr[endingRow][k]<<" ";
            index++;
        }
        endingRow--;
        
        // Printing starting column
        for(int m=endingRow; index < total && m>=startingRow;m--)
        {
            cout<<arr[m][startingCol]<<" ";
            index++;
        }
        startingCol++;
    }
    return 0;
}