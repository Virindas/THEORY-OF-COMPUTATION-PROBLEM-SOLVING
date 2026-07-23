/*
------------------------------------------------------------
Program: Check Whether a String Belongs to the Grammar

Question:
Write a C program to check whether a given string belongs
to the following grammar.

Grammar:
S ? 0A1
A ? 0A | 1A | e

Description:
The grammar generates all binary strings that:
1. Start with '0'
2. End with '1'
3. Can have any combination of 0's and 1's in between.

Example:
Input  : 0101
Output : String Accepted

Input  : 1010
Output : String Rejected
------------------------------------------------------------
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int n;

    // Read the input string
    printf("Enter a binary string: ");
    scanf("%s", str);

    // Find the length of the string
    n = strlen(str);

    // Check if the string starts with 0 and ends with 1
    if (str[0] == '0' && str[n-1] == '1')
        printf("String Accepted\n");
    else
        printf("String Rejected\n");

    return 0;
}
