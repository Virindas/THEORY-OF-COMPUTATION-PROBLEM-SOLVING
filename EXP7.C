/*
------------------------------------------------------------
Program: Check Whether a String Belongs to the CFG

Question:
Write a C program to check whether a given string belongs
to the language defined by the following Context-Free Grammar (CFG).

Grammar:
S ? 0S1 | e

Description:
The grammar generates strings with:
1. Equal number of 0's and 1's.
2. All 0's appear before all 1's.
3. Every 0 has a matching 1.

Examples:
Accepted Strings:
e
01
0011
000111

Rejected Strings:
001
011
0101
1100
------------------------------------------------------------
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i = 0, count0 = 0, count1 = 0, flag = 1;

    // Read the input string
    printf("Enter a binary string: ");
    scanf("%s", str);

    // Count leading 0's
    while(str[i] == '0')
    {
        count0++;
        i++;
    }

    // Count remaining 1's
    while(str[i] == '1')
    {
        count1++;
        i++;
    }

    // If any other character exists, reject
    if(str[i] != '\0')
        flag = 0;

    // Check whether the number of 0's and 1's are equal
    if(flag && count0 == count1)
        printf("String Accepted\n");
    else
        printf("String Rejected\n");

    return 0;
}
