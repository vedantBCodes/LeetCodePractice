/*
Given two strings str and goal,
return true if and only if str can become goal after some number of shifts on s.

For example, if s = "abcde", then it will be "bcdea" after one shift.

Example 1:
Input: s = "abcde", goal = "cdeab"
Output: true

Example 2:
Input: s = "abcde", goal = "abced"
Output: false
*/

#include <iostream>
#include <string.h>
using namespace std;
char *shiftingCharactersByOne(char str[])
{
    int strLength = strlen(str);
    int temp = str[0];
    for (int j = 0; j < strLength; j++)
    {
        str[j] = str[j + 1];
    }
    str[strLength - 1] = temp;
    return str;
}
bool stringCompair(char str1[], char str2[])
{
    if (strlen(str1) == strlen(str2))
    {
        for (int i = 0; i < strlen(str1); i++)
        {
            if (str1[i] != str2[i])
            {
                return false;
            }
        }
        return true;
    }
    else
    {
        return false;
    }
}
<<<<<<< HEAD
bool rotateAndCompairingString(char str[], char goal[])
=======
bool rotateAndCompairingString(char str[],char goal[])
>>>>>>> 53f25b1d25f8049bb0083573f2f66fa93021149b
{
    int strLength = strlen(str);
    char *emptyString;
    for (int i = 0; i < strLength; i++)
    {
        emptyString = shiftingCharactersByOne(str);
        bool check = false;
        check = stringCompair(emptyString, goal);
        if (check == true)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    char str[50] = "abcdef";
    char goal[50] = "cdefab";
    if (rotateString(str, goal))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}
