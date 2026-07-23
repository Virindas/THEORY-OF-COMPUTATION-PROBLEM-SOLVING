/*
------------------------------------------------------------
Program: Check Whether a String Belongs to the Grammar

Question:
Write a C program to check whether a given string belongs
to the following grammar.

Grammar:
S ? 0S0 | A
A ? 1A | e

Description:
The grammar generates strings with:
1. Equal number of 0's at the beginning and end.
2. Any number of 1's in the middle (including no 1's).

Examples:
Accepted Strings:
e
1
11
000111000
0110
001100

Rejected Strings:
0101
1010
1100
------------------------------------------------------------
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i = 0, j, flag = 1;

    // Read the input string
    printf("Enter a binary string: ");
    scanf("%s", str);

    j = strlen(str) - 1;

    // Remove matching 0's from both ends
    while(i < j && str[i] == '0' && str[j] == '0')
    {
        i++;
        j--;
    }

    // Check whether the remaining characters are all 1's
    while(i <= j)
    {
        if(str[i] != '1')
        {
            flag = 0;
            break;
        }
        i++;
    }

    // Display the result
    if(flag)
        printf("String Accepted\n");
    else
        printf("String Rejected\n");

    return 0;
}
